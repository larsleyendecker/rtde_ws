// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// Copyright 2019 FZI Forschungszentrum Informatik
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Tristan Schnell schnell@fzi.de
 * \date    2019-04-10
 *
 */
//----------------------------------------------------------------------

#ifndef UR_RTDE_DRIVER_RTDE_CLIENT_H_INCLUDED
#define UR_RTDE_DRIVER_RTDE_CLIENT_H_INCLUDED

#include "ur_robot_driver/comm/pipeline.h"
#include "ur_robot_driver/rtde/package_header.h"
#include "ur_robot_driver/rtde/rtde_package.h"
#include "ur_robot_driver/comm/stream.h"
#include "ur_robot_driver/rtde/rtde_parser.h"
#include "ur_robot_driver/comm/producer.h"
#include "ur_robot_driver/rtde/data_package.h"
#include "ur_robot_driver/rtde/request_protocol_version.h"
#include "ur_robot_driver/rtde/control_package_setup_outputs.h"
#include "ur_robot_driver/rtde/control_package_start.h"
#include "ur_robot_driver/log.h"
#include "ur_robot_driver/rtde/rtde_writer.h"

static const int UR_RTDE_PORT = 30004;
static const std::string PIPELINE_NAME = "RTDE Data Pipeline";

namespace ur_driver
{
namespace rtde_interface
{
/*!
 * \brief The RTDEClient class manages communication over the RTDE interface. It contains the RTDE
 * handshake and read and write functionality to and from the robot.
 */
class RTDEClient
{
public:
  RTDEClient() = delete;
  /*!
   * \brief Creates a new RTDEClient object, including a used URStream and Pipeline to handle the
   * communication with the robot.
   *
   * \param robot_ip The IP of the robot
   * \param notifier The notifier to use in the pipeline
   * \param output_recipe_file Path to the file containing the output recipe
   * \param input_recipe_file Path to the file containing the input recipe
   */
  RTDEClient(std::string robot_ip, comm::INotifier& notifier, const std::string& output_recipe_file,
             const std::string& input_recipe_file);
  ~RTDEClient() = default;
  /*!
   * \brief Sets up RTDE communication with the robot. The handshake includes negotiation of the
   * used protocol version and setting of input and output recipes.
   *
   * \returns Success of the handshake
   */
  bool init();
  /*!
   * \brief Triggers the robot to start sending RTDE data packages in the negotiated format.
   *
   * \returns Success of the requested start
   */
  bool start();
  /*!
   * \brief Reads the pipeline to fetch the next data package.
   *
   * \param timeout Time to wait if no data package is currently in the queue
   *
   * \returns Unique ptr to the package, if a package was fetched successfully, nullptr otherwise
   */
  std::unique_ptr<rtde_interface::DataPackage> getDataPackage(std::chrono::milliseconds timeout);

  /*!
   * \brief Getter for the frequency the robot will publish RTDE data packages with.
   *
   * \returns The used frequency
   */
  double getMaxFrequency() const
  {
    return max_frequency_;
  }

  /*!
   * \brief Getter for the UR control version received from the robot.
   *
   * \returns The VersionInformation received from the robot
   */
  VersionInformation getVersion()
  {
    return urcontrol_version_;
  }

  /*!
   * \brief Returns the IP address (of the machine running this driver) used for the socket connection.
   *
   * \returns The IP address as a string (e.g. "192.168.0.1")
   */
  std::string getIP() const;

  /*!
   * \brief Getter for the RTDE writer, which is used to send data via the RTDE interface to the
   * robot.
   *
   * \returns A reference to the used RTDEWriter
   */
  RTDEWriter& getWriter();

  /*!
   * \brief Getter for the RTDE output recipe.
   *
   * \returns The output recipe
   */
  std::vector<std::string> getOutputRecipe()
  {
    return output_recipe_;
  }

private:
  comm::URStream<PackageHeader> stream_;
  std::vector<std::string> output_recipe_;
  std::vector<std::string> input_recipe_;
  RTDEParser parser_;
  comm::URProducer<PackageHeader> prod_;
  comm::Pipeline<PackageHeader> pipeline_;
  RTDEWriter writer_;

  VersionInformation urcontrol_version_;

  double max_frequency_;

  constexpr static const double CB3_MAX_FREQUENCY = 125.0;
  constexpr static const double URE_MAX_FREQUENCY = 500.0;

  std::vector<std::string> readRecipe(const std::string& recipe_file);

  uint16_t negotiateProtocolVersion();
  void queryURControlVersion();
  void setupOutputs(const uint16_t protocol_version);
  void setupInputs();
};

}  // namespace rtde_interface
}  // namespace ur_driver

#endif  // UR_RTDE_DRIVER_RTDE_CLIENT_H_INCLUDED

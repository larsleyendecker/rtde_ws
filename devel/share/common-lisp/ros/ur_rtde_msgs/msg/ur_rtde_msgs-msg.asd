
(cl:in-package :asdf)

(defsystem "ur_rtde_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :ur_msgs-msg
)
  :components ((:file "_package")
    (:file "BitRegisterArray" :depends-on ("_package_BitRegisterArray"))
    (:file "_package_BitRegisterArray" :depends-on ("_package"))
    (:file "JointAcceleration" :depends-on ("_package_JointAcceleration"))
    (:file "_package_JointAcceleration" :depends-on ("_package"))
    (:file "JointCurrents" :depends-on ("_package_JointCurrents"))
    (:file "_package_JointCurrents" :depends-on ("_package"))
    (:file "JointMode" :depends-on ("_package_JointMode"))
    (:file "_package_JointMode" :depends-on ("_package"))
    (:file "JointPosition" :depends-on ("_package_JointPosition"))
    (:file "_package_JointPosition" :depends-on ("_package"))
    (:file "JointTemperature" :depends-on ("_package_JointTemperature"))
    (:file "_package_JointTemperature" :depends-on ("_package"))
    (:file "JointTorques" :depends-on ("_package_JointTorques"))
    (:file "_package_JointTorques" :depends-on ("_package"))
    (:file "JointVelocity" :depends-on ("_package_JointVelocity"))
    (:file "_package_JointVelocity" :depends-on ("_package"))
    (:file "JointVoltages" :depends-on ("_package_JointVoltages"))
    (:file "_package_JointVoltages" :depends-on ("_package"))
    (:file "RobotStatusBits" :depends-on ("_package_RobotStatusBits"))
    (:file "_package_RobotStatusBits" :depends-on ("_package"))
    (:file "SafetyStatus" :depends-on ("_package_SafetyStatus"))
    (:file "_package_SafetyStatus" :depends-on ("_package"))
    (:file "SafetyStatusBits" :depends-on ("_package_SafetyStatusBits"))
    (:file "_package_SafetyStatusBits" :depends-on ("_package"))
    (:file "ToolMode" :depends-on ("_package_ToolMode"))
    (:file "_package_ToolMode" :depends-on ("_package"))
  ))
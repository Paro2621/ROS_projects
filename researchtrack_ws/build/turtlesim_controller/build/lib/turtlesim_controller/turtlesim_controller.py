import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtlesimController(Node):

    def __init__(self):
        super().__init__('turtlesim_controller')

        # Subscriber
        self._subscription = self.create_subscription(
            Pose,
            'turtle1/pose',
            self._listener_callback,
            10
        )

        # Publisher (movement commands)
        self._cmd_pub = self.create_publisher(
            Twist,
            'turtle1/cmd_vel',
            10
        )

        # Timer to publish commands periodically
        self._timer = self.create_timer(0.1, self._publish_cmd)

        # Internal state
        self._current_pose = None
        self._cmd = Twist()


    def _listener_callback(self, msg: Pose):
        self._current_pose = msg
        self.get_logger().info(f"Current position: {msg.x}, {msg.y}")


    def _publish_cmd(self):
        # For now: simple example → constant forward speed

        self._cmd.linear.x = 1.0
        self._cmd.angular.z = 0.5

        self._cmd_pub.publish(self._cmd)

def main():
    try:
        rclpy.init()
        node = TurtlesimController()
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        if node is not None:
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == "__main__":
    main()

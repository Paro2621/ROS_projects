''' UI (node1)
    1. Implement a simple textual interface to retrieve the user command 
        (i.e., you can use cin (c++) or input (python). 
        The user should be able to select the robot they want to control (turtle1 or turtle2), and the velocity of the robot
    2. The command should be sent for 1 second, and then the robot should stop, and the user should be able again to insert the command again
'''

import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node('UI')
    rclpy.spin(node)
    rclpy.shutdown()
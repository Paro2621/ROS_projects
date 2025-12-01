from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, TimerAction


def generate_launch_description():
    return LaunchDescription([

        Node(               # Launch turtlesim (one window)
            package='turtlesim',
            executable='turtlesim_node',
            name='turtlesim',
            output='screen'
        ),

        TimerAction(        # Spawn turtle2 using ros2 service call
            period=0.5,     # wait for /spawn to be available
            actions=[
                ExecuteProcess(
                    cmd=[
                        'ros2', 'service', 'call', '/spawn',
                        'turtlesim/srv/Spawn',
                        "{x: 7.0, y: 7.0, theta: 0.0, name: 'turtle2'}"
                    ],
                    output='screen'
                )
            ]
        ),

        TimerAction(        # Run TurtleManager
            period=1.0,     # small delay to not incasinate (technical term) the spawn of the second turtle
            actions=[
                Node(
                    package='assignment1_rt',
                    executable='TurtleManager',
                    name='TurtleManager',
                    output='screen'
                ),
            ]
        ),
    ])
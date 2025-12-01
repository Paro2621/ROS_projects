from setuptools import setup
import os
from glob import glob

package_name = 'assignment1_rt'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='you@example.com',
    description='ROS2 package example',
    license='Apache License 2.0',

    entry_points={
        'console_scripts': [
            'TurtleManager = assignment1_rt.TurtleManager:main',
            'UI = assignment1_rt.UI:main',
        ],
    },

    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
            glob('launch/*.launch.py')),
    ]
)

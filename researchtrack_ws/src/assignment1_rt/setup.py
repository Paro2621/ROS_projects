from setuptools import find_packages, setup

package_name = 'assignment1_rt'

setup(
    name=package_name,
<<<<<<< HEAD
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
=======
    version='0.1.0',
    packages=find_packages(exclude=['test']),
>>>>>>> edf5cbd (creating fundation)
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ric',
    maintainer_email='riccardoparotelli@gmail.com',
<<<<<<< HEAD
    description='TODO: Package description',
    license='TODO: License declaration',
=======
    description='ROS2 package example',
    license='Apache License 2.0',

>>>>>>> edf5cbd (creating fundation)
    extras_require={
        'test': [
            'pytest',
        ],
    },
<<<<<<< HEAD
    entry_points={
        'console_scripts': [
        ],
    },
=======

    entry_points={
        'console_scripts': [
            'TurtleManager = assignment1_rt.TurtleManager:main',
            'UI = assignment1_rt.UI:main',
        ],
    },

    data_files=[
        ('share/assignment1_rt/launch', 
        ['launch/assignment1.launch.py']),
    ],
>>>>>>> edf5cbd (creating fundation)
)

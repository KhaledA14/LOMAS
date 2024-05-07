import os
from glob import glob
from setuptools import  find_packages, setup

package_name = 'lomas_ros_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.xml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Johan Kurt',
    maintainer_email='johan10_kurt@hotmail.com',
    description='A ROS 2 package for managing LOMAS robotics operations',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'machine_node_2 = lomas_ros_pkg.machine_node_2:main',
            'watering_node_2 = lomas_ros_pkg.watering_node_2:main',
        ],
    },
)

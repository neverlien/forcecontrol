cmake_minimum_required(VERSION 2.8.3)
project(camera_calibration_panda)

add_compile_options(-std=c++11 -g)

# find_package(Boost REQUIRED system filesystem date_time thread)
# find_package(OpenCV REQUIRED core imgproc highgui aruco)
find_package(Franka REQUIRED)
# find_package(Franka REQUIRED PATHS /opt/libfranka/build)
# find_library(REALSENSE2_LIBRARY realsense2)
# include_directories(SYSTEM ${THIS_PACKAGE_INCLUDE_DIRS} ${Boost_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})

add_executable(franka_test src/test.cpp)
add_executable(forcelib src/forcesensor.cpp)

target_link_libraries(franka_test
	${Franka_LIBRARIES}
)

target_link_libraries(forcelib
	${Franka_LIBRARIES}
)
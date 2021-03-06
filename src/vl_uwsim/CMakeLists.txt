cmake_minimum_required(VERSION 2.8.3) 
project(vl_uwsim)

##############################
# Catkin Setup ###############
##############################


find_package(catkin 
    REQUIRED COMPONENTS
    roscpp
    cv_bridge #these two are used in the camera node
    image_transport
    ram_cpp_utils
    ram_msgs
    tf2_ros
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp
  )

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

##############################
# File List ##################
##############################

include_directories(
  ${catkin_INCLUDE_DIRS}
  include  
  depth/include
  dvl/include
  imu/include
  power/include
  temp/include
  camera/include
  thrusters/include
  )

set(DEPTH_SRC_FILES
  depth/src/main.cpp
  depth/src/depth_sim.cpp
  )

set(DVL_SRC_FILES
  dvl/src/main.cpp
  dvl/src/dvl_sim.cpp
  )

set(IMU_SRC_FILES
  imu/src/main.cpp
  imu/src/imu_sim.cpp
  )

set(POWER_SRC_FILES
  power/src/main.cpp
  power/src/power_sim.cpp
  )

set(TEMP_SRC_FILES
  temp/src/main.cpp
  temp/src/temp_sim.cpp

  )

set(CAMERA_SRC_FILES
  camera/src/main.cpp
  camera/src/camera_sim.cpp
  )

set(THRUSTER_SRC_FILES
  thrusters/src/main.cpp
  thrusters/src/thruster_sim.cpp
  )


##############################
# Add Executables ############
##############################


add_executable(depth_node ${DEPTH_SRC_FILES}) 
target_link_libraries(depth_node ${catkin_LIBRARIES})

#SG: these get special names uwsim specfic names because there's a conflict otherwise
add_executable(uwsim_dvl_node ${DVL_SRC_FILES})
target_link_libraries(uwsim_dvl_node ${catkin_LIBRARIES})

add_executable(uwsim_imu_node ${IMU_SRC_FILES})
target_link_libraries(uwsim_imu_node ${catkin_LIBRARIES})
  
add_executable(power_node ${POWER_SRC_FILES})
target_link_libraries(power_node ${catkin_LIBRARIES})

add_executable(temp_node ${TEMP_SRC_FILES})
target_link_libraries(temp_node ${catkin_LIBRARIES})

add_executable(camera_node ${CAMERA_SRC_FILES})
target_link_libraries(camera_node ${catkin_LIBRARIES})

add_executable(thruster_node ${THRUSTER_SRC_FILES})
target_link_libraries(thruster_node ${catkin_LIBRARIES})


##############################
# Unit Tests #################
##############################


##SG: maybe one day we'll have the time and inclination to make unit tests...

#catkin_add_gtest(${PROJECT_NAME}_tests ${TEST_FILES})

#set_target_properties(${PROJECT_NAME}_tests PROPERTIES LINKER_LANGUAGE CXX)

#target_link_libraries(${PROJECT_NAME}_tests
#    ${catkin_LIBRARIES}
#    ${PROJECT_NAME}
#)

##############################
# Installable Targets ########
##############################


#SG: I'll be honest, I don't entirely know what this commented out code does, but it breaks when I leave it in 
#install(TARGETS ${PROJECT_NAME}
#  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
#)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

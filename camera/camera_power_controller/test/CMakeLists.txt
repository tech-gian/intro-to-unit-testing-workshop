# CameraPowerController_test
add_executable(camera_power_controller_test CameraPowerController_test.cpp)
target_include_directories(camera_power_controller_test PUBLIC mocks)
target_link_libraries(camera_power_controller_test
    PRIVATE
    camera_power_controller)
configure_test(camera_power_controller_test)

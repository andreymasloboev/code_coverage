set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(GoogleTest)

set(GTEST_SRC_FILES
  test_resource.cpp
)

cmake_path(GET GTEST_SRC_FILES STEM TEST_NAME)
add_executable(${TEST_NAME} ${GTEST_SRC_FILES})
target_link_libraries(${TEST_NAME} PRIVATE Coverage_lib GTest::gtest GTest::gtest_main)
gtest_discover_tests(${TEST_NAME} WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
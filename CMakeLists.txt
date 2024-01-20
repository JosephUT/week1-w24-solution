# TODO: Set the minimum version of CMake required to 3.16. Set the project name to homework_1. Set the C++ standard to 20.
# Begin solution code.
cmake_minimum_required(VERSION 3.25)
project(homework_1)
set(CMAKE_CXX_STANDARD 20)
# End solution code.

# TODO: Find the GTest package and set it as required for the project.
# Begin solution code.
find_package(GTest REQUIRED)
# End solution code.

# TODO: Enable generation of the CTestTestfile.cmake list file.
# Begin solution code.
enable_testing()
# End solution code.

# TODO: Build an executable for test_bracket_checking.cpp and link it against GTest::gtest_main.
# Begin solution code.
add_executable(test_bracket_checking
        test/test_bracket_checking.cpp
)
target_include_directories(test_bracket_checking
        PRIVATE
        include
)
target_link_libraries(test_bracket_checking
        GTest::gtest_main
)
# End solution code.

# TODO: Build an executable for test_message_holder.cpp and link it against GTest::gtest_main.
# Begin solution code.
add_executable(test_message_holder
        test/test_message_holder.cpp
)
target_include_directories(test_message_holder
        PRIVATE
        include
)
target_link_libraries(test_message_holder
        GTest::gtest_main
)
# End solution code.

# TODO: Build an executable for test_timestamp_sorting.cpp and link it against GTest::gtest_main.
# Begin solution code.
add_executable(test_timestamp_sorting
        test/test_timestamp_sorting.cpp
)
target_include_directories(test_timestamp_sorting
        PRIVATE
        include
)
target_link_libraries(test_timestamp_sorting
        GTest::gtest_main
)
# End solution code.

# TODO: Build an executable for test_message_table.cpp and link it against GTest::gtest_main.
# Begin solution code.
add_executable(test_message_table
        test/test_message_table.cpp
)
target_include_directories(test_message_table
        PRIVATE
        include
)
target_link_libraries(test_message_table
        GTest::gtest_main
)
# End solution code.

# TODO: Register the all four GTest unit tests above with CTest. This should require only one GTest helper function.
# Begin solution code.
gtest_discover_tests(
        test_bracket_checking
)
gtest_discover_tests(
        test_message_holder
)
gtest_discover_tests(
        test_timestamp_sorting
)
gtest_discover_tests(
        test_message_table
)
# End solution code.

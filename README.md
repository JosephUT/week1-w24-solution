# Homework 1

## Coding Problems
There are six files with coding problems. Read each file and complete the sections marked **TODO**.
Although you can complete the problems in any order, it will be most convenient to follow the order
below. 

1. CMake Programming. ```01_cmake_programming.cmake```
2. CMake Project with GTest. ```CMakeLists.txt```
3. Stacks. ```03_bracket_checking.hpp```
4. Queues. ```04_message_holder.hpp```
5. Priority Queues. ```05_timestamp_sorting.hpp```
6. Hash Maps. ```06_message_table.hpp```

It will be especially critical that you complete the **TODO**'s in ```CMakeLists.txt```, as you will not be
able to run your unit tests otherwise. Everything you will need for this file was covered explicitly in 
Lab 1.

The other files may require you to look at CMake or C++ documentation, but general concepts were 
covered in Lab 1, and references and examples from the slides will be useful.

### Testing
Each section in problem 1 can be tested separately by running the corresponding ```test_cmake/test_*``` 
CMake script. The correct outputs are stored in the corresponding ```test_cmake/test_*``` file. You can 
run the test script and diff against the correct output. The commands for testing the functions are 
below and are intended to be run from the root directory.

**insert_robotics_and_print()**
```
cmake -P test_cmake/test_insert_robotics_and_print.cmake >> output.txt 2>&1
sdiff output.txt test_cmake/correct_test_output/insert_robotics_and_print.txt
rm output.txt
```

**weave_arguments_and_print()**
```
cmake -P test_cmake/test_weave_arguments_and_print.cmake >> output.txt 2>&1
sdiff output.txt test_cmake/correct_test_output/weave_arguments_and_print.txt
rm output.txt
```

**print_identical_values()**
```
cmake -P test_cmake/test_print_identical_values.cmake >> output.txt 2>&1
sdiff output.txt test_cmake/correct_test_output/print_identical_values.txt
rm output.txt
```

**print_first_line_in_file()**
```
cmake -P test_cmake/test_print_first_line_in_file.cmake >> output.txt 2>&1
sdiff output.txt test_cmake/correct_test_output/print_first_line_in_file.txt
rm output.txt
```

You should see that the outputs are identical for all four test functions.

Problems 3-6 should be tested by invoking the unit tests under ```/test```. After completing problem 2, 
you should be able to invoke your unit tests either through the CLion interface or by running ```ctest``` 
in the root of the build tree. Refer to the testing usage discussion in Lab 1. All tests should pass after 
completion.

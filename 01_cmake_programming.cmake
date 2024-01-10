#[[
Take two input strings and print them in order with " robotics " in between. Output should be a single line.
]]
function(insert_robotics_and_print STRING1 STRING2)
    # TODO: Implement this function.
    # Begin solution code.
    message("${STRING1} robotics ${STRING2}")
    # End solution code.
endfunction()

#[[
Print the values for the arguments passed to the function in a pattern as shown below. The function should work for
any number of arguments.

Pattern to print:

    first_argument
    last_argument
    second_argument
    next_to_last_argument
    third_argument
    ...
    last_argument
    first_argument
]]
function(weave_arguments_and_print)
    # TODO: Implement this function.
    # Begin solution code.
    set(ARGV_COPY ${ARGV})
    list(REVERSE ARGV)
    foreach (FIRST SECOND IN ZIP_LISTS ARGV_COPY ARGV)
        message(${FIRST})
        message(${SECOND})
    endforeach ()
    # End solution code.
endfunction()

#[[
Take two lists and print the number of values that appear in both lists. Then, each on a new line, print the matching
values in the order they appear in the first list.
]]
function(print_identical_values LIST1 LIST2)
    # TODO: Implement this function.
    # Begin solution code.
    set(MATCH_LIST "")
    set(MATCH_COUNT 0)
    foreach (LIST1_VALUE IN LISTS LIST1)
        foreach (LIST2_VALUE IN LISTS LIST2)
            if (${LIST1_VALUE} STREQUAL ${LIST2_VALUE})
                list(APPEND MATCH_LIST ${LIST1_VALUE})
                math(EXPR MATCH_COUNT "${MATCH_COUNT} + 1")
            endif ()
        endforeach ()
    endforeach ()
    message(${MATCH_COUNT})
    foreach (MATCH_VALUE IN LISTS MATCH_LIST)
        message(${MATCH_VALUE})
    endforeach ()
    # End solution code.
endfunction()

#[[
Take a file name and print the first line in the file if the file exists. If the file does not exist,
print "Error: file does not exist.".
]]
function(print_first_line_in_file FILENAME)
    # TODO: Implement this function.
    # Begin solution code.
    if (EXISTS ${FILENAME})
        file(STRINGS ${FILENAME} FIRST_LINE LIMIT_COUNT 1)
        message(${FIRST_LINE})
    else ()
        message("Error: file does not exist.")
    endif ()
    # End solution code.
endfunction()

include(01_cmake_programming.cmake)

set(LIST1 transform messaging robot)
set(LIST2 robot messaging transform)
print_identical_values("${LIST1}" "${LIST2}")

set(LIST1 socket thread process os middleware infrastructure)
set(LIST2 acadian_flycatcher infrastructure crow field_sparrow thread)
print_identical_values("${LIST1}" "${LIST2}")

set(LIST1 house_wren osprey condor red_winged_blackbird)
set(LIST2 osprey ostrich baltimore_oriole house_wren red_winged_blackbird)
print_identical_values("${LIST1}" "${LIST2}")

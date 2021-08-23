# CMake generated Testfile for 
# Source directory: /container/Testing
# Build directory: /container/build/Testing
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(NoArgs "/container/build/bin/golBasicTest")
set_tests_properties(NoArgs PROPERTIES  _BACKTRACE_TRIPLES "/container/Testing/CMakeLists.txt;36;add_test;/container/Testing/CMakeLists.txt;0;")
add_test(1File "/container/build/bin/golCommandLineArgsTest" "/container/Testing/Data/input.txt")
set_tests_properties(1File PROPERTIES  _BACKTRACE_TRIPLES "/container/Testing/CMakeLists.txt;37;add_test;/container/Testing/CMakeLists.txt;0;")

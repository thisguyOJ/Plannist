# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PLANNIST_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PLANNIST_1_autogen.dir\\ParseCache.txt"
  "PLANNIST_1_autogen"
  )
endif()

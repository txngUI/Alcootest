# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Alcootest_autogen"
  "CMakeFiles\\Alcootest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Alcootest_autogen.dir\\ParseCache.txt"
  )
endif()

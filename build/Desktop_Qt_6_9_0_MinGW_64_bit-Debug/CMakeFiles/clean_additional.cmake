# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ResidentialManagement_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ResidentialManagement_autogen.dir\\ParseCache.txt"
  "ResidentialManagement_autogen"
  )
endif()

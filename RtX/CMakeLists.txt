# CMakeList.txt : CMake project for RtX, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (RtX "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET RtX PROPERTY CXX_STANDARD 20)
endif()

target_precompile_headers(RtX PRIVATE "pch.h")
# TODO: Add tests and install targets if needed.
target_link_libraries(RtX PRIVATE glfw)
target_link_libraries(RtX PRIVATE volk)
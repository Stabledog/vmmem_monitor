cmake_minimum_required(VERSION 3.0)
project(YourProjectName)

set(CMAKE_C_STANDARD 11)

# Add your source files here
set(SOURCE_FILES
    cpu_monitor.c
    # Add more source files if necessary
)


# Add the executable target
add_executable(YourProjectName ${SOURCE_FILES})
# Add the necessary libraries
target_link_libraries(YourProjectName PRIVATE Pdh.lib)

# Set the main function
set_target_properties(YourProjectName PROPERTIES LINK_FLAGS "/ENTRY:mainCRTStartup")

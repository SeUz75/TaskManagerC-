cmake_minimum_required(VERSION 3.10)
project(TaskManagerApp)

set(CMAKE_CXX_STANDARD 17)

# Add subdirectories (libraries)
add_subdirectory(task)
add_subdirectory(taskManager)
add_subdirectory(storage)

# Main executable
add_executable(TaskManagerApp
    main.cpp
)

# Link libraries to executable
target_link_libraries(TaskManagerApp
    task
    taskManager
    storage
)

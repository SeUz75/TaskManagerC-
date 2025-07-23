add_library(task STATIC task.cpp)

target_include_directories(task PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
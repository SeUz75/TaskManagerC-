add_library(taskManager STATIC taskManager.cpp)

target_include_directories(taskManager PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(taskManager task storage)

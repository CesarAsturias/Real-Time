set (Example_source main.cpp )
add_executable(main ${Example_source})
target_link_libraries(main ${CMAKE_THREAD_LIBS_INIT})

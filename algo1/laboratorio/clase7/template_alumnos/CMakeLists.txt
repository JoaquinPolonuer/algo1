cmake_minimum_required(VERSION 3.6)
project(Clase7)

#set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(SOURCE_FILES
        ejercicios.cpp
        cases.cpp
        main.cpp
        #gTests.cpp
        )

add_executable(Clase7 ${SOURCE_FILES})

target_link_libraries(Clase7 gtest gtest_main)

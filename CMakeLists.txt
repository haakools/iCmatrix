cmake_minimum_required(VERSION 3.10)
project(iCmatrix)


add_executable(main src/main.c src/vector.c)

target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include)





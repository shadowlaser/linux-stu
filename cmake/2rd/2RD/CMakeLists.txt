project(HELLO) 
set (CMAKE_VERBOSE_MAKEFILE on)
set (SRC_LIST main.c hello.c)
add_executable(hello ${SRC_LIST})


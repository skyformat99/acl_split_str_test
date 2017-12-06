
project(fifo)

set(abs_dir /boot/opts/)
cmake_minimum_required(VERSION 2.8)

include_directories(../../../lib_acl/include)
link_directories(${abs_dir}/acl/lib_acl/lib)

add_executable(fifo split.c)

target_link_libraries(fifo _acl.a  pthread)



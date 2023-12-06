#cmake_minumum_required(VERSION 2.8)


#project name
project(main)

#head file path
include_directories(include)

#source direcotry 指定源文件目录为src，并将其赋值给环境变量DIR_SRCS
aux_source_directory(src DIR_SRCS)

#设定环境变量TEST_MATH的值为环境变量DIR_SRCS的值，此处用于显示如何用环境变量对环境变量进行赋值
set(TEST_MATH ${DIR_SRCS})

#set extern libraries
#set(LIBRARIES libm.so pthread)

#add executable fiel 这个第一个参数main是生成的可执行文件的名称
add_executable(main ${TEST_MATH})

#add link library
#target_link_libraries(main ${LIBRARIES})


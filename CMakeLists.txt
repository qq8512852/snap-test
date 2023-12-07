cmake_minimum_required(VERSION 3.16)

#project name
project(main)

# 添加可执行文件, must make the name "my_executable" as install(TARGETS xxxx)
# add_executable(my_executable src/main.c)

#source direcotry 指定源文件目录为src，并将其赋值给环境变量SRCS
aux_source_directory(src SRCS)

#设置lib和include
set(INC_DIR "./libs/openssl/include")
set(LIB_DIR "./libs/openssl/lib64")
set(DEPEND_LIB  -lm
                -lssl
                -lcrypto)
#指定头文件目录
include_directories(${INC_DIR}) # 对应于-I

#指定链接库的路径
link_directories(${LIB_DIR})    # 对应于-L

#链接库， MySharedLib为库名
link_libraries(${DEPEND_LIB})

message("~~~~~~~~~${INC_DIR},${LIB_DIR},${DEPEND_LIB}~~~~~")

#生成目标文件 这个第一个参数main是生成的可执行文件的名称
add_executable(${CMAKE_PROJECT_NAME} ${SRCS})
#add link library
#target_link_libraries(main ${LIBRARIES})
target_link_libraries(${CMAKE_PROJECT_NAME} ${DEPEND_LIB}) # 对应于 -L和-l

# 设置统一安装路径前缀,配置make install
set(CMAKE_INSTALL_PREFIX ./install)
# 定义安装对象及安装路径,配置make install
install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION ./)

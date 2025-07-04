cmake_minimum_required(VERSION 3.10)
project(workerManager)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 添加头文件目录
include_directories(include)

# 自动收集源文件
file(GLOB_RECURSE SRC_FILES src/*.cpp)

# 添加可执行文件
add_executable(worker_manager ${SRC_FILES})
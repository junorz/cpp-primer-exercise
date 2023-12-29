cmake_minimum_required(VERSION 3.27)
project(cpp_primer_exercises)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)

# 获取所有的源文件
file(GLOB_RECURSE CPP_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "chapter*/*.cpp")

# 为每个源文件创建一个目标
foreach (SOURCE_FILE ${CPP_SOURCES})
    # 将文件路径中的斜杠和点替换为下划线
    string(REPLACE "/" "_" MODIFIED_SOURCE_FILE ${SOURCE_FILE})
    string(REPLACE "." "_" UNIQUE_TARGET_NAME ${MODIFIED_SOURCE_FILE})
    # 创建可执行文件
    add_executable(${UNIQUE_TARGET_NAME} ${SOURCE_FILE})
    # 获取文件的目录路径
    get_filename_component(DIR_NAME ${SOURCE_FILE} DIRECTORY)
    # 设置输出目录
    set_target_properties(${UNIQUE_TARGET_NAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output/${DIR_NAME}")
endforeach ()
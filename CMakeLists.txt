cmake_minimum_required(VERSION 3.20.0)
project(planning
VERSION 0.0.1
DESCRIPTION "a demo of cmake planning"
HOMEPAGE_URL "https://github.com/chengkangpeng/cmake_planning_demo2"
LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(PROCESS_DIR ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(SHOW_RESULT_DIR ${CMAKE_SOURCE_DIR}/src/show_result)

#第三方库
list(APPEND 
CMAKE_MODULE_PATH 
"C:/Users/CKP/AppData/Local/Programs/eigen-3.4.0/cmake"
)

find_package(Eigen3 3.4 REQUIRED)

add_subdirectory(src)
add_subdirectory(test/map_test)
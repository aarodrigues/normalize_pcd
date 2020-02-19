cmake_minimum_required(VERSION 2.8.3)
project(normalize_pcd)

set (CMAKE_CXX_STANDARD 11)

find_package(Boost REQUIRED COMPONENTS filesystem system)

include_directories(include)

link_directories(
  ${Boost_LIBRARY_DIRS}
)

set(SOURCES "src/convert.cpp")
set(ENTRY_POINT "src/main.cpp")

add_executable(${PROJECT_NAME} ${ENTRY_POINT} ${SOURCES} )
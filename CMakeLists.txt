cmake_minimum_required(VERSION 3.20)
project(FirstSFMLGame)

set(CMAKE_CXX_STANDARD 20)
set(SFML_STATIC_LIBRARIES TRUE)

add_executable(FirstSFMLGame main.cpp "learning/Hello World/hello_world.cpp" "learning/Hello World/hello_world.h")

set(SFML_DIR "C:/SFML/lib/cmake/SFML")

target_link_libraries(FirstSFMLGame sfml-graphics)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)
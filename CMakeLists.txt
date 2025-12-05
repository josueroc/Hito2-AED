cmake_minimum_required(VERSION 3.20)
project(SnakeQuadTree)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---------------------------------
# SFML (solo el juego usa SFML)
# ---------------------------------
find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

# ---------------------------------
# Archivos principales del juego
# ---------------------------------
set(SOURCES
        src/main.cpp
        src/QuadTree.cpp
        src/Snake.cpp
        src/Food.cpp
)

set(HEADERS
        src/QuadTree.h
        src/Snake.h
        src/Food.h
)

add_executable(SnakeGame ${SOURCES} ${HEADERS})

target_include_directories(SnakeGame PRIVATE src)
target_link_libraries(SnakeGame sfml-graphics sfml-window sfml-system)

# ---------------------------------
# EXAMPLES (NO usan SFML)
# ---------------------------------
file(GLOB EXAMPLE_FILES "examples/*.cpp")

foreach(example_file ${EXAMPLE_FILES})
    get_filename_component(example_name ${example_file} NAME_WE)

    add_executable(${example_name}
            ${example_file}
            src/QuadTree.cpp
            src/Snake.cpp
            src/Food.cpp
    )

    target_include_directories(${example_name} PRIVATE src)
endforeach()

# ---------------------------------
# TESTS (NO usan SFML)
# ---------------------------------
file(GLOB TEST_FILES "tests/*.cpp")

foreach(test_file ${TEST_FILES})
    get_filename_component(test_name ${test_file} NAME_WE)

    add_executable(${test_name}
            ${test_file}
            src/QuadTree.cpp
            src/Snake.cpp
            src/Food.cpp
    )

    target_include_directories(${test_name} PRIVATE src)
endforeach()
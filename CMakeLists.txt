cmake_minimum_required(VERSION 3.20)
project(SnakeQuadTree)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)


set(SOURCES
        src/main.cpp
        src/QuadTree.cpp
        src/Snake.cpp
)

set(HEADERS
        src/QuadTree.h
        src/Snake.h
)


add_executable(SnakeGame ${SOURCES} ${HEADERS})


target_link_libraries(SnakeGame sfml-graphics sfml-window sfml-system)

target_include_directories(SnakeGame PRIVATE src)


if(APPLE)
    set_target_properties(SnakeGame PROPERTIES
            MACOSX_BUNDLE TRUE
            MACOSX_BUNDLE_INFO_PLIST ${CMAKE_SOURCE_DIR}/Info.plist
    )
endif()

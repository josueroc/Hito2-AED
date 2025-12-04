cmake_minimum_required(VERSION 3.20)
project(Hito2-AED)

set(CMAKE_CXX_STANDARD 17)

# Incluir headers
include_directories(src)

# ===========================
#  PROGRAMA PRINCIPAL
# ===========================
add_executable(main
        src/main.cpp
        src/QuadTree.cpp
)

# ===========================
#  EJEMPLOS
# ===========================
add_executable(ejemplo_insertar
        examples/ejemplo_insertar.cpp
        src/QuadTree.cpp
)

add_executable(ejemplo_buscar
        examples/ejemplo_buscar.cpp
        src/QuadTree.cpp
)

add_executable(ejemplo_eliminar
        examples/ejemplo_eliminar.cpp
        src/QuadTree.cpp
)

# ===========================
#  TESTS
# ===========================
add_executable(test_quadtree
        tests/test_quadtree.cpp
        src/QuadTree.cpp
)

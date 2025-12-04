# Hito2-AED
Análisis y Aplicación de Quad Trees en Representación Espacial y Videojuegos

## Proyecto Quad Tree y Snake

Este proyecto implementa un **Point Quad Tree** en C++ para la representación jerárquica de información espacial 2D.  
Además, se implementa un **juego de Snake** que utiliza Quad Trees para la gestión eficiente de los objetos en el espacio (como la comida y el cuerpo de la serpiente).  
El proyecto incluye un **artículo académico en LaTeX** que analiza los Quad Trees, sus variantes, pseudocódigo, complejidad y aplicaciones prácticas.

El objetivo es proporcionar tanto una implementación funcional como documentación técnica detallada para estudiar y aplicar Quad Trees en distintos contextos.

---

## Estructura del repositorio

snake-quadtree/
│
├── CMakeLists.txt
├── README.md
├── cmake-build-debug/ # Archivos de compilación de CMake/CLion
├── src/
│ ├── QuadTree.h
│ ├── QuadTree.cpp
│ ├── snake.h
│ ├── snake.cpp
│ ├── food.h
│ ├── food.cpp
│ └── main.cpp
├── examples/
│ ├── ejemplo_insertar.cpp
│ ├── ejemplo_buscar.cpp
│ └── ejemplo_eliminar.cpp
├── tests/
│ └── test_quadtree.cpp
└── latex/
├── main.tex
├── references.bib
└── figures/

- `src/` contiene la implementación principal del Quad Tree, Snake y Food, así como el programa principal.  
- `examples/` incluye ejemplos de inserción, búsqueda y eliminación de puntos en el Quad Tree.  
- `tests/` contiene pruebas unitarias para validar el funcionamiento de la estructura.  
- `latex/` contiene el artículo en LaTeX con figuras y referencias bibliográficas.

---

## Requisitos

- **C++17** o superior  
- Compilador compatible con C++ (GCC, Clang, MSVC)  
- **CMake** para compilación  
- **SFML 2.5** (para la interfaz del juego Snake)  
- **LaTeX** (opcional, para compilar el artículo), recomendado **TeX Live** o **MiKTeX**

---

## Compilación con CMake

1. Crear carpeta de compilación y configurar:


mkdir build
cd build
cmake ..
Compilar el proyecto:
cmake --build .
Ejecutar el juego Snake:
./SnakeGame      # Linux/macOS
SnakeGame.exe    # Windows
Ejecutar los ejemplos de Quad Tree:
./ejemplo_insertar
./ejemplo_buscar
./ejemplo_eliminar
Ejecutar los tests unitarios:
./test_quadtree
Uso básico del Quad Tree
Inserción: agregar puntos 2D a la estructura.
Búsqueda: localizar puntos existentes en el árbol.
Eliminación: remover puntos y opcionalmente comprimir nodos vacíos.
Para ejemplos prácticos, revisa examples/.
Uso básico del juego Snake
Mueve la serpiente usando las flechas del teclado.
La comida se coloca en posiciones controladas por un Quad Tree para mejorar eficiencia en colisiones.
El juego termina si la serpiente colisiona consigo misma o con los bordes.
Referencias
R. A. Finkel y J. L. Bentley, "Quad trees: A data structure for retrieval on composite keys," Acta Informatica, 1974.
H. Samet, The quadtree and related hierarchical data structures, ACM Comput. Surv., 1984.
H. Samet, Applications of Spatial Data Structures, Addison-Wesley, 1989.
Licencia
Este proyecto está bajo la licencia MIT. Puedes usar, modificar y distribuir libremente el código y la documentación.



🚀 Hito2-AED

Análisis y Aplicación de Quad Trees en Representación Espacial y Videojuegos

Este proyecto implementa un Point Quad Tree en C++ para la representación jerárquica de información espacial en 2D.
Además, se desarrolla un juego Snake que utiliza Quad Trees para gestionar eficientemente elementos como:
	•	la comida,
	•	el cuerpo de la serpiente,
	•	y las colisiones en el mapa.

El repositorio también incluye un artículo académico en LaTeX, donde se analizan:
	•	las variantes de Quad Trees,
	•	su pseudocódigo,
	•	su complejidad,
	•	y aplicaciones en videojuegos, compresión y GIS.

El objetivo es proporcionar una implementación funcional y documentación técnica que permita estudiar y aplicar Quad Trees en diversos contextos.

⸻

📁 Estructura del repositorio

snake-quadtree/
│
├── CMakeLists.txt
├── README.md
│
├── src/
│   ├── QuadTree.h
│   ├── QuadTree.cpp
│   ├── snake.h
│   ├── snake.cpp
│   ├── food.h
│   ├── food.cpp
│   └── main.cpp
│
├── examples/
│   ├── ejemplo_insertar.cpp
│   ├── ejemplo_buscar.cpp
│   └── ejemplo_eliminar.cpp
│
├── tests/
│   └── test_quadtree.cpp
│
└── latex/
    ├── main.tex
    ├── references.bib
    └── figures/

Descripción
	•	src/ → Implementación principal del Quad Tree, Snake y Food.
	•	examples/ → Ejemplos simples de inserción, búsqueda y eliminación en el Quad Tree.
	•	tests/ → Pruebas unitarias para validar la estructura.
	•	latex/ → Artículo académico completo en LaTeX con bibliografía y figuras.

⸻

🔧 Requisitos

Software
	•	C++17 o superior
	•	Compilador compatible: GCC / Clang / MSVC
	•	CMake 3.20+
	•	SFML 2.5+ (para el juego Snake)
	•	LaTeX (opcional), recomendado:
	•	TeX Live
	•	MiKTeX

⸻

🛠️ Compilación con CMake

1. Crear carpeta de compilación

mkdir build
cd build
cmake ..

2. Compilar

cmake --build .


⸻

▶️ Ejecución

Ejecutar el juego Snake

./SnakeGame        # Linux/macOS
SnakeGame.exe      # Windows

Ejecutar ejemplos de Quad Tree

./ejemplo_insertar
./ejemplo_buscar
./ejemplo_eliminar

Ejecutar los tests

./test_quadtree


⸻

🌳 Uso básico del Quad Tree
	•	Inserción: agregar puntos 2D al árbol.
	•	Búsqueda: localizar un punto dado.
	•	Eliminación: remover puntos y opcionalmente fusionar subárboles vacíos.

Puedes ver ejemplos prácticos en la carpeta examples/.

⸻

🐍 Uso básico del juego Snake
	•	Mueve la serpiente con las flechas del teclado.
	•	La comida se coloca mediante un Point Quad Tree para optimizar:
	•	búsqueda espacial,
	•	detección de colisiones,
	•	regeneración de comida.
	•	El juego termina si la serpiente colisiona consigo misma o con los bordes.

⸻

📚 Referencias
	•	R. A. Finkel & J. L. Bentley, “Quad trees: A data structure for retrieval on composite keys”, Acta Informatica (1974).
	•	H. Samet, “The quadtree and related hierarchical data structures”, ACM Computing Surveys (1984).
	•	H. Samet, Applications of Spatial Data Structures, Addison-Wesley (1989).

⸻

📄 Licencia

Este proyecto está bajo la licencia MIT.
Puedes usar, modificar y distribuir libremente el código y la documentación.


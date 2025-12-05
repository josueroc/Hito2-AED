
🌀 Análisis y Aplicación de Quad Trees en Representación Espacial y Procesamiento de Imágenes

Este proyecto implementa un Point Quad Tree en C++ y lo aplica en dos contextos:
	1.	Representación espacial y consultas eficientes
	2.	Procesamiento interactivo mediante un juego tipo Snake
donde el QuadTree se usa para manejar colisiones espaciales de manera óptima.

El repositorio también incluye:
	•	Implementación completa del Quad Tree
	•	Ejemplos de inserción, búsqueda y eliminación
	•	Tests unitarios
	•	Juego Snake basado en QuadTree
	•	Artículo en LaTeX (inclúyelo si lo tienes, puedo agregarlo como sección)

⸻

📁 Estructura del Repositorio

Hito2-AED/
│
├── CMakeLists.txt             # Configuración de CMake
├── README.md                  # Este documento
│
├── src/                       # Código fuente principal
│   ├── QuadTree.cpp / .h      # Implementación del Quad Tree
│   ├── Snake.cpp / .h         # Lógica del juego Snake
│   ├── Food.cpp / .h          # Generación de comida usando QuadTree
│   └── main.cpp               # Juego Snake
│
├── examples/                  # Ejemplos simples de uso del Quad Tree
│   ├── ejemplo_insertar.cpp
│   ├── ejemplo_buscar.cpp
│   └── ejemplo_eliminar.cpp
│
├── tests/                     # Pruebas unitarias
│   └── test_quadtree.cpp
│
└── cmake-build-debug/         # Archivos generados por CMake/CLion


⸻

🚀 ¿Qué implementa este proyecto?

✔️ Quad Tree para puntos (Point Quad Tree)

Soporta:
	•	insert(Point)
	•	search(Point)
	•	remove(Point)
	•	subdivisión dinámica
	•	nodos EMPTY, LEAF, INTERNAL

✔️ Snake con Quad Tree
	•	Cada frame del juego reconstruye un Quad Tree con el cuerpo de la serpiente.
	•	La colisión con comida + cuerpo se verifica con:

qt.search(point);


	•	La comida se genera siempre en una celda no ocupada usando el Quad Tree.

⸻

🔧 Compilación (macOS + Windows + Linux)

Este proyecto usa:
	•	C++17
	•	CMake ≥ 3.20
	•	SFML 2.6.1

Para compilar:

mkdir build
cd build
cmake ..
cmake --build .

El ejecutable principal será:

./SnakeGame


⸻

📌 Cómo ejecutar los ejemplos

Correr con:

./ejemplo_insertar
./ejemplo_buscar
./ejemplo_eliminar

📌 Cómo ejecutar los tests

./test_quadtree


⸻

🪟 Instalación de SFML en Windows (CLion o CMake)

1️⃣ Descargar SFML 2.6.1

➡ https://www.sfml-dev.org/download/sfml/2.6.1/

Seleccionar según compilador:
	•	Para MSVC 2022:

SFML 2.6.1 - Visual C++ 17 (MSVC 2022) 64-bit


	•	Para CLion + MinGW:

SFML 2.6.1 - GCC 13.1.0 MinGW (SEH) 64-bit



⚠ Debe coincidir exactamente:
Arquitectura (64-bit), compilador (MSVC vs MinGW), excepción (seh/posix).

⸻

2️⃣ Extraer en:

C:\libs\SFML-2.6.1


⸻

3️⃣ Indicar ruta a SFML en CLion:

En menú:

File → Settings → Build, Execution, Deployment → CMake

Agregar en CMake options:

-DSFML_DIR="C:/libs/SFML-2.6.1/lib/cmake/SFML"


⸻

4️⃣ Copiar DLLs necesarias

Copiar desde:

C:\libs\SFML-2.6.1\bin\

Hacia:

cmake-build-debug\

Copiar:

sfml-graphics-2.dll
sfml-window-2.dll
sfml-system-2.dll


⸻

🍏 Instalación en macOS

SFML 2.6.1:

brew install sfml

Listo → CMake lo detecta automáticamente.

⸻

🕹️ Controles del juego

↑  Mover arriba  
↓  Mover abajo  
←  Mover izquierda  
→  Mover derecha  

El juego termina si:
	•	la serpiente choca consigo misma
	•	se sale del mapa

⸻

🧪 Ejemplos de uso del QuadTree

Insertar:

QuadTree qt(100, 100);
qt.insert({10, 20});

Buscar:

if (qt.search({50, 50})) {
    std::cout << "Encontrado";
}

Eliminar:

qt.remove({10, 20});


⸻

📝 Licencia

MIT — Libre uso con atribución.

⸻

🎓 Autores

Proyecto realizado para el curso Algoritmos y Estructuras de Datos
“Hito 2 — Quad Trees”

⸻

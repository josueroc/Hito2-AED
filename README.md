



# 🌀 Análisis y Aplicación de Quad Trees en Representación Espacial y Procesamiento de Imágenes

Este proyecto implementa un Point Quad Tree en C++ y lo aplica en dos áreas principales:
	•	Representación espacial de datos 2D
	•	Procesamiento interactivo a través de un juego tipo Snake
donde el QuadTree permite gestionar colisiones de forma eficiente.



### 📁 Estructura del Repositorio


<pre>
Hito2-AED/
│
├── CMakeLists.txt
├── README.md
│
├── src/
│   ├── QuadTree.cpp
│   ├── QuadTree.h
│   ├── Snake.cpp
│   ├── Snake.h
│   ├── Food.cpp
│   ├── Food.h
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
└── cmake-build-debug/
</pre>



### 🚀 Implementaciones Principales


🔷 Quad Tree (Point QuadTree)

<br>
Soporta:


- Inserción de puntos
- Búsqueda espacial
- Eliminación
- Subdivisión adaptativa
- Nodos EMPTY, LEAF, INTERNAL  

<br>

🐍 Snake con QuadTree

El QuadTree se reconstruye cada frame para:
- Detección de colisiones con el cuerpo
- Ubicación rápida de comida
- Optimización en consultas espaciales


<br>

Esto convierte el clásico Snake en un ejemplo práctico del uso real de Quad Trees.

<br>

### 🔧 Compilación del Proyecto

Requisitos:
- C++17
- CMake ≥ 3.20
- SFML 2.6.1 o superior
<br>

mkdir build
cd build
cmake ..
cmake --build .
<br>

Ejecutar:

./SnakeGame

<br>

### ▶️ Ejecutar Ejemplos

./ejemplo_insertar
./ejemplo_buscar
./ejemplo_eliminar

<br>


### 🧪 Ejecutar Tests Unitarios

./test_quadtree


<br>

### 🪟 Instalación de SFML en Windows (CLion + CMake)

1️⃣ Descargar SFML 2.6.1

🔗 https://www.sfml-dev.org/download/sfml/2.6.1/
<br>

Elige la versión según tu compilador:
- MSVC 2022 → SFML-2.6.1-windows-msvc-17-64bit
- MinGW 64-bit → SFML-2.6.1-windows-gcc-13.1-seh-64bit
<br>

2️⃣ Extraer en:

C:\libs\SFML-2.6.1

<br>

3️⃣ En CLion → Settings → CMake → CMake options:


-DSFML_DIR="C:/libs/SFML-2.6.1/lib/cmake/SFML"

<br>

4️⃣ Copiar las DLLs al directorio de compilación

Desde:
<br>

C:\libs\SFML-2.6.1\bin\
<br>

Hacia:
<br>

cmake-build-debug\
<br>

Debes copiar:
<br>

sfml-graphics-2.dll
sfml-window-2.dll
sfml-system-2.dll

<br>

### 🍏 Instalación SFML en macOS

brew install sfml

CMake lo detecta automáticamente.
<br>


### 🕹️ Controles del Juego

- ↑  Arriba
- ↓  Abajo
- ←  Izquierda
- →  Derecha
<br>
Juego termina si:
<br>
- la serpiente golpea un borde
- colisiona consigo misma
<br>


### 🧰 Uso Básico del QuadTree

Insertar


QuadTree qt(100, 100);
qt.insert({10, 20});
<br>

Buscar
if (qt.search({50, 50})) {
    std::cout << "Encontrado\n";
}
<br>

Eliminar
qt.remove({10, 20});

<br>


### 📄 Licencia

Este proyecto está bajo licencia MIT.

<br>

### ✍️ Autoría

Proyecto desarrollado para el curso:
Algoritmos y Estructuras de Datos — Hito 2
“Análisis y Aplicación de Quad Trees en Representación Espacial y Procesamiento de Imágenes”


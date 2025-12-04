# Hito2-AED
Análisis y Aplicación de Quad trees en Representación Espacial y Procesamiento de Imágenes

# Proyecto Quad Tree

## Descripción

Este proyecto implementa un **Point Quad Tree** en C++ para la representación jerárquica de información espacial 2D.  
Además, incluye un **artículo académico en LaTeX** que analiza los Quad Trees, sus variantes, pseudocódigo, complejidad y aplicaciones prácticas en procesamiento de imágenes, GIS, gráficos por computadora y videojuegos.

El objetivo es proporcionar tanto una implementación funcional como documentación técnica detallada para estudiar y aplicar Quad Trees en distintos contextos.

---

## Estructura del repositorio

```

QuadTreeProject/
│
├── README.md
├── LICENSE
├── src/
│   ├── QuadTree.h
│   ├── QuadTree.cpp
│   └── main.cpp
├── examples/
│   └── ejemplo_insertar.cpp
├── tests/
│   └── test_quadtree.cpp
├── latex/
│   ├── main.tex
│   ├── references.bib
│   └── figures/
└── .gitignore

````

- `src/` contiene la implementación principal del Quad Tree y un programa de demostración.  
- `examples/` incluye ejemplos de inserción, búsqueda y eliminación de puntos.  
- `tests/` contiene pruebas unitarias para validar el funcionamiento de la estructura.  
- `latex/` contiene el artículo en LaTeX con figuras y referencias bibliográficas.

---

## Requisitos

- **C++17** o superior  
- Compilador compatible con C++ (GCC, Clang, MSVC)  
- **LaTeX** (para compilar el artículo), recomendado **TeX Live** o **MiKTeX**

---

## Compilación y ejecución

1. Compilar el código principal:

```bash
g++ -std=c++17 src/*.cpp -o QuadTreeDemo
````

2. Ejecutar el programa:

```bash
./QuadTreeDemo
```

3. (Opcional) Compilar el artículo en LaTeX:

```bash
cd latex
pdflatex main.tex
bibtex main
pdflatex main.tex
pdflatex main.tex
```

Esto generará `main.pdf` con el artículo completo.

---

## Uso básico del Quad Tree

* **Inserción:** agregar puntos 2D a la estructura.
* **Búsqueda:** localizar puntos existentes en el árbol.
* **Eliminación:** remover puntos y opcionalmente comprimir nodos vacíos.

Para ejemplos prácticos, revisa `examples/ejemplo_insertar.cpp`.

---

## Referencias

* R. A. Finkel y J. L. Bentley, "Quad trees: A data structure for retrieval on composite keys," *Acta Informatica*, 1974.
* H. Samet, *The quadtree and related hierarchical data structures*, ACM Comput. Surv., 1984.
* H. Samet, *Applications of Spatial Data Structures*, Addison-Wesley, 1989.

---

## Licencia

Este proyecto está bajo la licencia [MIT](LICENSE). Puedes usar, modificar y distribuir libremente el código y la documentación.

```

Si quieres, puedo hacer una **versión aún más visual y profesional** con badges (estado de compilación, lenguaje, PDF del artículo) para que quede lista para GitHub.  
¿Quieres que haga eso?
```

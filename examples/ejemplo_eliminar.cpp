#include "QuadTree.h"
#include <iostream>

int main() {
    QuadTree qt(100, 100);

    Point p1 = {10, 20};
    Point p2 = {50, 50};
    qt.insert(p1);
    qt.insert(p2);

    Point eliminar = {10, 20};
    if (qt.remove(eliminar)) {
        std::cout << "Punto eliminado correctamente." << std::endl;
    } else {
        std::cout << "No se pudo eliminar el punto." << std::endl;
    }

    return 0;
}

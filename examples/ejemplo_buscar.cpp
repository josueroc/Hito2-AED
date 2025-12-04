#include "QuadTree.h"
#include <iostream>

int main() {
    QuadTree qt(100, 100);

    Point p1 = {10, 20};
    Point p2 = {50, 50};
    qt.insert(p1);
    qt.insert(p2);

    Point buscar = {50, 50};
    if (qt.search(buscar)) {
        std::cout << "Punto encontrado en el QuadTree." << std::endl;
    } else {
        std::cout << "Punto NO encontrado en el QuadTree." << std::endl;
    }

    return 0;
}

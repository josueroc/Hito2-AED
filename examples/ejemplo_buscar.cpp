#include <iostream>
#include "QuadTree.h"

int main() {
    QuadTree qt(100, 100);

    qt.insert({10, 20});
    qt.insert({50, 50});
    qt.insert({75, 80});

    Point p = {50, 50};

    if (qt.search(p)) {
        std::cout << "Punto (" << p.x << "," << p.y << ") encontrado." << std::endl;
    } else {
        std::cout << "Punto (" << p.x << "," << p.y << ") no encontrado." << std::endl;
    }

    return 0;
}

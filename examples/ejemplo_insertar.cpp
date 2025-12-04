#include "QuadTree.h"
#include <iostream>

int main() {
    QuadTree qt(100, 100);

    Point p1 = {10, 20};
    Point p2 = {50, 50};
    Point p3 = {75, 80};

    qt.insert(p1);
    qt.insert(p2);
    qt.insert(p3);

    std::cout << "Puntos insertados correctamente." << std::endl;
    return 0;
}

#include "QuadTree.h"

int main() {
    QuadTree qt(8, 8);

    Point A = {1, 1};
    Point B = {6, 6};
    Point C = {1, 6};
    Point D = {6, 1};

    qt.insert(A);
    qt.insert(B);
    qt.insert(C);
    qt.insert(D);

    std::cout << "Buscar punto (1,1): " << (qt.search(A) ? "Encontrado" : "No encontrado") << std::endl;
    std::cout << "Buscar punto (5,5): " << (qt.search({5,5}) ? "Encontrado" : "No encontrado") << std::endl;

    qt.remove(A);
    std::cout << "Buscar punto (1,1) después de eliminar: " << (qt.search(A) ? "Encontrado" : "No encontrado") << std::endl;

    return 0;
}

#include "QuadTree.h"
#include <iostream>
#include <cassert>

void testInsertar() {
    QuadTree qt(100, 100);
    Point p1 = {10, 20};
    Point p2 = {50, 50};
    Point p3 = {75, 80};

    assert(qt.insert(p1) && "Error al insertar p1");
    assert(qt.insert(p2) && "Error al insertar p2");
    assert(qt.insert(p3) && "Error al insertar p3");

    std::cout << "Test insertar: OK" << std::endl;
}

void testBuscar() {
    QuadTree qt(100, 100);
    Point p1 = {10, 20};
    Point p2 = {50, 50};
    qt.insert(p1);
    qt.insert(p2);

    assert(qt.search(p1) && "Error: p1 no encontrado");
    assert(qt.search(p2) && "Error: p2 no encontrado");
    Point pNoExist = {99, 99};
    assert(!qt.search(pNoExist) && "Error: pNoExist encontrado incorrectamente");

    std::cout << "Test buscar: OK" << std::endl;
}

void testEliminar() {
    QuadTree qt(100, 100);
    Point p1 = {10, 20};
    Point p2 = {50, 50};
    qt.insert(p1);
    qt.insert(p2);

    assert(qt.remove(p1) && "Error al eliminar p1");
    assert(!qt.search(p1) && "p1 todavía existe después de eliminar");
    assert(qt.search(p2) && "p2 desapareció inesperadamente");

    std::cout << "Test eliminar: OK" << std::endl;
}

int main() {
    testInsertar();
    testBuscar();
    testEliminar();

    std::cout << "Todos los tests pasaron correctamente." << std::endl;
    return 0;
}

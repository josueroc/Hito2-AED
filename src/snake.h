#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "QuadTree.h"

enum Direction { UP, DOWN, LEFT, RIGHT };

class Snake {
public:
    Snake(int startX, int startY);

    // calcula siguiente posición sin mover aún
    Point nextHeadPosition(Direction newDir);

    // verifica si la siguiente posición causaría colisión
    bool willCollide(Point next, int width, int height);

    // mueve efectivamente la serpiente
    void move(Direction dir);

    void grow();

    // colisión después de mover (aún se usa en algunos casos)
    bool checkCollision(int width, int height);

    std::vector<Point>& getBody();

    QuadTree buildQuadTree(int width, int height);

private:
    std::vector<Point> body;
    Direction dir;
    bool growNext;
};

#endif
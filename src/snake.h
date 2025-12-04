#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "QuadTree.h"

enum Direction { UP, DOWN, LEFT, RIGHT };

class Snake {
public:
    Snake(int startX, int startY);
    void move(Direction dir);
    void grow();
    bool checkCollision(int width, int height);
    std::vector<Point>& getBody();

private:
    std::vector<Point> body;
    Direction dir;
    bool growNext;
};

#endif

#ifndef FOOD_H
#define FOOD_H

#include "QuadTree.h"
#include <cstdlib>
#include <ctime>

class Food {
public:
    Food(int width, int height);
    void generate(const QuadTree& qt);
    Point getPosition();

private:
    int width, height;
    Point position;
};

#endif

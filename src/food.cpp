#include "Food.h"

Food::Food(int w, int h) : width(w), height(h) {
    std::srand(std::time(nullptr));
    position = { rand() % width, rand() % height };
}

void Food::generate(const QuadTree& qt) {
    bool valid = false;
    while (!valid) {
        position.x = (rand() % (width / 10)) * 10;
        position.y = (rand() % (height / 10)) * 10;

        valid = !qt.search(position);
    }
}

Point Food::getPosition() {
    return position;
}
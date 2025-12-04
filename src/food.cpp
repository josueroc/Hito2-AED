#include "Food.h"

Food::Food(int w, int h) : width(w), height(h) {
    std::srand(std::time(nullptr));
    position = {rand() % width, rand() % height};
}

void Food::generate(const std::vector<Point>& snakeBody) {
    bool valid = false;
    while (!valid) {
        position.x = (rand() % (width/10)) * 10;
        position.y = (rand() % (height/10)) * 10;
        valid = true;
        for (auto& p : snakeBody) {
            if (p.x == position.x && p.y == position.y) {
                valid = false;
                break;
            }
        }
    }
}

Point Food::getPosition() {
    return position;
}

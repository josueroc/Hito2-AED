#include "Snake.h"

Snake::Snake(int startX, int startY) : dir(RIGHT), growNext(false) {
    body.push_back({startX, startY});
}

void Snake::move(Direction newDir) {
    dir = newDir;

    Point head = body.front();
    switch (dir) {
    case UP: head.y -= 10; break;
    case DOWN: head.y += 10; break;
    case LEFT: head.x -= 10; break;
    case RIGHT: head.x += 10; break;
    }

    body.insert(body.begin(), head);
    if (growNext) {
        growNext = false;
    } else {
        body.pop_back();
    }
}

void Snake::grow() {
    growNext = true;
}

bool Snake::checkCollision(int width, int height) {
    Point head = body.front();
    if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height) return true;

    for (size_t i = 1; i < body.size(); i++)
        if (head.x == body[i].x && head.y == body[i].y) return true;

    return false;
}

std::vector<Point>& Snake::getBody() {
    return body;
}

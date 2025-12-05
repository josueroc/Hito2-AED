#include "Snake.h"

Snake::Snake(int startX, int startY) : dir(RIGHT), growNext(false) {
    body.push_back({startX, startY});
}

Point Snake::nextHeadPosition(Direction newDir) {
    Point head = body.front();

    switch (newDir) {
    case UP:    head.y -= 10; break;
    case DOWN:  head.y += 10; break;
    case LEFT:  head.x -= 10; break;
    case RIGHT: head.x += 10; break;
    }

    return head;
}

bool Snake::willCollide(Point next, int width, int height) {
    if (next.x < 0 || next.x >= width || next.y < 0 || next.y >= height)
        return true;

    // colision con cuerpo (excepto la ultima cola si no va a crecer)
    size_t limit = (growNext ? body.size() : body.size() - 1);

    for (size_t i = 0; i < limit; i++) {
        if (body[i].x == next.x && body[i].y == next.y)
            return true;
    }

    return false;
}

void Snake::move(Direction newDir) {

    Point next = nextHeadPosition(newDir);

    // actualizar dirección solo si no choca sobre sí misma (opcional)
    dir = newDir;

    body.insert(body.begin(), next);

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

    if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height)
        return true;

    for (size_t i = 1; i < body.size(); i++) {
        if (head.x == body[i].x && head.y == body[i].y)
            return true;
    }

    return false;
}

std::vector<Point>& Snake::getBody() {
    return body;
}

QuadTree Snake::buildQuadTree(int width, int height) {
    QuadTree qt(width, height);
    for (auto& p : body) {
        qt.insert(p);
    }
    return qt;
}
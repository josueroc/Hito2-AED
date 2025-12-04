
#include "QuadTree.h"

QuadTree::QuadTree(int width, int height) {
    root = new QuadNode(0, 0, width, height);
}

void liberarNodo(QuadNode* node) {
    if (!node) return;

    liberarNodo(node->NW);
    liberarNodo(node->NE);
    liberarNodo(node->SW);
    liberarNodo(node->SE);

    if (node->point) {
        delete node->point;
        node->point = nullptr;
    }

    delete node;
}

QuadTree::~QuadTree() {
    liberarNodo(root);
}

bool QuadTree::insert(Point p) {
    return insert(root, p);
}

bool QuadTree::insert(QuadNode* node, Point p) {
    if (node->type == EMPTY) {
        node->point = new Point(p);
        node->type = LEAF;
        return true;
    }
    else if (node->type == LEAF) {
        subdivide(node);
        Point existing = *(node->point);
        delete node->point;
        node->point = nullptr;
        insert(getQuadrant(node, existing), existing);
        return insert(getQuadrant(node, p), p);
    }
    else { // INTERNAL
        return insert(getQuadrant(node, p), p);
    }
}

bool QuadTree::search(Point p) {
    return search(root, p);
}

bool QuadTree::search(QuadNode* node, Point p) {
    if (!node) return false;
    if (node->type == EMPTY) return false;
    if (node->type == LEAF) return (node->point->x == p.x && node->point->y == p.y);
    return search(getQuadrant(node, p), p);
}

bool QuadTree::remove(Point p) {
    return remove(root, p);
}

bool QuadTree::remove(QuadNode* node, Point p) {
    if (!node) return false;
    if (node->type == LEAF && node->point->x == p.x && node->point->y == p.y) {
        delete node->point;
        node->point = nullptr;
        node->type = EMPTY;
        return true;
    }
    else if (node->type == INTERNAL) {
        return remove(getQuadrant(node, p), p);
    }
    return false;
}

void QuadTree::subdivide(QuadNode* node) {
    int midX = (node->x_min + node->x_max) / 2;
    int midY = (node->y_min + node->y_max) / 2;

    node->NW = new QuadNode(node->x_min, midY, midX, node->y_max);
    node->NE = new QuadNode(midX, midY, node->x_max, node->y_max);
    node->SW = new QuadNode(node->x_min, node->y_min, midX, midY);
    node->SE = new QuadNode(midX, node->y_min, node->x_max, midY);

    node->type = INTERNAL;
}

QuadNode* QuadTree::getQuadrant(QuadNode* node, Point p) {
    int midX = (node->x_min + node->x_max) / 2;
    int midY = (node->y_min + node->y_max) / 2;

    if (p.x < midX) {
        if (p.y >= midY) return node->NW;
        else return node->SW;
    } else {
        if (p.y >= midY) return node->NE;
        else return node->SE;
    }
}

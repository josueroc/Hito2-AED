#ifndef QUADTREE_H
#define QUADTREE_H

#include <iostream>
#include <vector>

struct Point {
    int x, y;
};

enum NodeType { EMPTY, LEAF, INTERNAL };

struct QuadNode {
    NodeType type;
    Point* point;
    QuadNode* NW;
    QuadNode* NE;
    QuadNode* SW;
    QuadNode* SE;
    int x_min, y_min, x_max, y_max;

    QuadNode(int xmin, int ymin, int xmax, int ymax)
        : type(EMPTY), point(nullptr), NW(nullptr), NE(nullptr), SW(nullptr), SE(nullptr),
          x_min(xmin), y_min(ymin), x_max(xmax), y_max(ymax) {}
};

class QuadTree {
public:
    QuadTree(int width, int height);
    ~QuadTree();

    bool insert(Point p);
    bool search(Point p);
    bool remove(Point p);

private:
    QuadNode* root;
    bool insert(QuadNode* node, Point p);
    bool search(QuadNode* node, Point p);
    bool remove(QuadNode* node, Point p);
    void subdivide(QuadNode* node);
    QuadNode* getQuadrant(QuadNode* node, Point p);
};

#endif

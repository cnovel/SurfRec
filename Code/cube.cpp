#include "cube.h"

class Cube {
    Cube::Cube(Point p, float res) {
        listOfPoints.clear();
        listOfPoints.push_back(p);
        listOfPoints.push_back(Point(p.x + res, p.y, p.z));
        listOfPoints.push_back(Point(p.x + res, p.y + res, p.z));
        listOfPoints.push_back(Point(p.x, p.y + res, p.z));
        listOfPoints.push_back(Point(p.x, p.y, p.z + res));
        listOfPoints.push_back(Point(p.x + res, p.y, p.z + res));
        listOfPoints.push_back(Point(p.x + res, p.y + res, p.z + res));
        listOfPoints.push_back(Point(p.x, p.y + res, p.z + res));
    }
    std::vector<Point>& getPoints() {
        return listOfPoints*;
    }
}
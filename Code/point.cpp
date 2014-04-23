#include "point.h"

Point meanPoint(Point p1, Point p2) {
    Point p();
    p.x = (p1.x + p2.x)/2;
    p.y = (p1.y + p2.y)/2;
    p.z = (p1.z + p2.z)/2;

    return p;
}

class Point {
        Point::Point() {
            x = y = z = 0;
        }
        Point::Point(float x_, float y_, float z_)  {
            x = x_;
            y = y_;
            z = z_;
        }
}
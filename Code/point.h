#ifndef DEF_POINT
#define DEF_POINT

class Point {
    public:
    	Point();
    	Point(float x_, float y_, float z_);

    	float x;
    	float y;
    	float z;
};

Point meanPoint(Point p1, Point p2);

#endif
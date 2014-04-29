#ifndef DEF_GRID
#define DEF_GRID

#include "point.h"
#include "cube.h"

class Grid {
    public:
    	Grid(Point top_, Point bottom_, float res_);

    	float resolution;
    	std::vector<Cube> listOfCubes;
    	Point top;
    	Point bottom;
};

#endif
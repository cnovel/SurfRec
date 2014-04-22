#ifndef DEF_GRID
#define DEF_GRID

#include "point.h"

class Grid {
    public:
    	Grid(Point top_, Point bottom_, float res_);

    	Point getTop();
    	Point getBottom();
    	float getRes();
    	std::vector<Cube>& getCubes();

    private:
    	float resolution;
    	std::vector<Cube> listOfCubes
    	Point top;
    	Point bottom;
};

#endif
#ifndef DEF_CUBE
#define DEF_CUBE

#include <vector>

#include "point.h"

/* The list of points is stored like this :
      7-----------6
     /|          /|      z
    / |         / |      |  y
   4--+--------5  |      | /
   |  |        |  |      |/
   |  3--------+--2     .+---- x
   | /         | /
   |/          |/
   0-----------1
*/
class Cube {
    public:
      Cube(Point p, float res);
    	std::vector<Point> listOfPoints;
};

#endif
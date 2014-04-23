#ifndef DEF_CUBE
#define DEF_CUBE

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
    	std::vector<Point> listOfPoints;
};

#endif
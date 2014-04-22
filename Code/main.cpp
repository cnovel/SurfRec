///////////////////////////////////
// Marching cubes implementation //
//     CC-BY 3.0 Cyril NOVEL     //
///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <vector>

#include "grid.h"
#include "point.h"
#include "cube.h"

float isofunction(Point p) {
	//* Torus equation
	float R = 2.0;
	float r = 0.5;
	float f = pow(R - sqrt(pow(p.x, 2.0) + pow(p.y, 2.0)), 2.0) + pow(p.z, 2.0) - pow(r, 2.0);
	//*/

	/* Sphere equation
	float R = 2.0;
	float f = pow(p.x, 2.0) + pow(p.y, 2.0) + pow(p.z, 2.0) - pow(R, 2.0);
	//*/

	return f;
}

int main(int argc, char** argv) {
	
}
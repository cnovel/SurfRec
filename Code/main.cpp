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
#include "code.h"


std::vector< std::vector <Point> > cubeProcessing(Cube c, std::vector< std::vector<int> > rotations) {
	std::vector<int> markedVertices;
	int nbPointsInside = 0;
	bool swap = false;
	for (int i = 0; i < c.listOfPoints.size(); i++) {
		if insideModel(c.listOfPoints[i]) {
			markedVertices.append(1);
			nbPointsInside++;
		} else {
			markedVertices.append(0);
		}
	}

	if nbPointsInside > 4: {
		for (int i = 0; i < 8; i++) {
			markedVertices[i] = (markedVertices[i] == 1)?0:1;
		}
	}

	int code = -1

	for (int i = 0; i < rotations.size(); i++) {
		code = computeRotatedCode(markedVertices, rotations[i]);
		if acceptable(code) {
			return triangles(code, res, rotations[i], c)
		}
	}
}

bool insideModel(Point p, float isovalue = 0) {
	//* Torus equation
	float R = 2.0;
	float r = 0.5;
	float f = pow(R - sqrt(pow(p.x, 2.0) + pow(p.y, 2.0)), 2.0) + pow(p.z, 2.0) - pow(r, 2.0);
	//*/

	/* Sphere equation
	float R = 2.0;
	float f = pow(p.x, 2.0) + pow(p.y, 2.0) + pow(p.z, 2.0) - pow(R, 2.0);
	//*/

	if f > isovalue {
		return false;
	} else {
		return true;
	}
}

int main(int argc, char** argv) {
	Point bottomPoint = Point(-4.0, -4.0, -4.0);
	Point topPoint = Point(4.0, 4.0, 4.0);

	float res = .2;
	Grid g = Grid(topPoint, bottomPoint, res);

	std::vector< std::vector <Point> > trianglesList;

	for (int i = 0; i < g.listOfCubes.size(); i++) {
		trianglesList.append(cubeProcessing(g.listOfCubes[i]));
	}

	int nbVertices = 3 * trianglesList.size();
	int nbTriangles = trianglesList.size();
}
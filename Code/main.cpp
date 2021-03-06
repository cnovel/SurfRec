///////////////////////////////////
// Marching cubes implementation //
//     CC-BY 3.0 Cyril NOVEL     //
///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <vector>

#include <iostream>
#include <fstream>

#include "grid.h"
#include "point.h"
#include "cube.h"
#include "code.h"
#include "plywriter.h"

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

	if (f > isovalue) {
		return false;
	} else {
		return true;
	}
}

std::vector< std::vector <Point> > cubeProcessing(Cube c, std::vector< std::vector<int> > rotations, float res) {
	std::vector<int> markedVertices;

	int nbPointsInside = 0;
	bool swap = false;
	for (int i = 0; i < c.listOfPoints.size(); i++) {
		if (insideModel(c.listOfPoints[i])) {
			markedVertices.push_back(1);
			nbPointsInside++;
		} else {
			markedVertices.push_back(0);
		}
	}

	if (nbPointsInside > 4) {
		for (int i = 0; i < 8; i++) {
			markedVertices[i] = (markedVertices[i] == 1)?0:1;
		}
	}

	int code = -1;

	for (int i = 0; i < rotations.size(); i++) {
		code = computeRotatedCode(markedVertices, rotations[i]);
		if (acceptable(code)) {
			std::vector< std::vector <Point> > cubeTriangles = triangles(code, res, rotations[i], c);
			if (nbPointsInside <= 4) {
				return cubeTriangles;
			} else {
				return invertTriangles(cubeTriangles);
			}
		}
	}
}

int main(int argc, char** argv) {
	Point bottomPoint = Point(-3.0, -3.0, -3.0);
	Point topPoint = Point(3.0, 3.0, 3.0);
	
	float res = .2;
	Grid g = Grid(topPoint, bottomPoint, res);

	std::vector< std::vector <Point> > trianglesList;
	std::vector< std::vector<int> > rotations = createRotationTable();

	std::cout << "Processing of each cubes ... ";
	
	for (int i = 0; i < g.listOfCubes.size(); i++) {
		int f = (int)(((float) i)*100.0/((float) g.listOfCubes.size()));
		if (i%1000 == 0)
			std::cout << f << "%... ";

		std::vector< std::vector <Point> > newTriangles = cubeProcessing(g.listOfCubes[i], rotations, res);

		if (newTriangles.size() != 0)
			trianglesList.insert(trianglesList.end(), newTriangles.begin(), newTriangles.end());
	}
	std::cout << "done!" << std::endl;	

	int nbVertices = 3 * trianglesList.size();
	int nbTriangles = trianglesList.size();

	std::ofstream plyFile;
  	plyFile.open("mcResult.ply");
  	writeHeader(plyFile, nbVertices, nbTriangles);
  	writeVertices(plyFile, trianglesList);
  	writeTriangles(plyFile, nbTriangles);
  	plyFile.close();
  	

	return 0;
}
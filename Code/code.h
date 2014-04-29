#ifndef DEF_CODE
#define DEF_CODE

#include <vector>
#include <cstdlib>
#include <math.h>

#include "point.h"
#include "cube.h"

std::vector< std::vector <Point> > triangles(int code, float res, std::vector<int> rotations, Cube c);
bool acceptable(int code);
std::vector< std::vector<int> > createRotationTable();
int computeCode(std::vector<int> v);
int computeRotatedCode(std::vector<int> v, std::vector<int> rot);
std::vector< std::vector <Point> > invertTriangles(std::vector< std::vector <Point> > cubeTriangles);

#endif
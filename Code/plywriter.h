#ifndef DEF_PLYWRITER
#define DEF_PLYWRITER

#include <vector>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <fstream>

#include "point.h"

void writeHeader(std::ofstream &plyFile, int nbVertices, int nbTriangles);
void writeVertices(std::ofstream &plyFile, std::vector< std::vector <Point> > trianglesList);
void writeTriangles(std::ofstream &plyFile, int nbTriangles);

#endif
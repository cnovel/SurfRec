#ifndef DEF_CODE
#define DEF_CODE

#include "point.h"

bool acceptable(int code)
std::vector< std::vector<int> > createRotationTable();
int computeCode(std::vector<int> v);
int computeRotatedCode(std::vector<int> v, std::vector<int> rot);
std::vector< std::vector <Point> > triangles(int code);

#endif
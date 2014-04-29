#include "grid.h"

Grid::Grid(Point top_, Point bottom_, float res_) {
	top = top_;
	bottom = bottom_;
	resolution = res_;

	int Nx = int((top.x - bottom.x)/resolution);
	int Ny = int((top.y - bottom.y)/resolution);
	int Nz = int((top.z - bottom.z)/resolution);

	listOfCubes.clear();
	for(int i = 0; i < Nx*Ny*Nz; i++) {
		int nx = i/(Nz*Ny);
		int ny = (i % (Nz*Ny))/Nz;
		int nz = (i % (Nz*Ny))%Nz;

		Point p = Point(nx*resolution+bottom.x, ny*resolution+bottom.y, nz*resolution+bottom.z);
		listOfCubes.push_back(Cube(p, resolution));
	}
}
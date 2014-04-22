#include "grid.h"

class Grid {
	Grid::Grid(Point top_, Point bottom_, float res_) {
		top = top_;
		bottom = bottom_;
		res = res_;

		int Nx = int((top.x - bottom.x)/res);
		int Ny = int((top.y - bottom.y)/res);
		int Nz = int((top.z - bottom.z)/res);

		listOfCubes.clear();
		for(int i = 0; i < Nx*Ny*Nz; i++) {
			int nx = i/(Nz*Ny);
			int ny = (i % (Nz*Ny))/Nz;
			int nz = (i % (Nz*Ny))%Nz;

			Point p = Point(nx*res+bottom.x, ny*res+bottom.y, nz*res+bottom.z);
			listOfCubes.push_back(Cube(p, res));
		}
	}
	
}
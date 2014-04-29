#include "plywriter.h"

void writeHeader(std::ofstream &plyFile, int nbVertices, int nbTriangles) {
	plyFile << "ply\n";
	plyFile << "format ascii 1.0\n";
	plyFile << "element vertex " << nbVertices << "\n";
	plyFile << "property float x\n";
	plyFile << "property float y\n";
	plyFile << "property float z\n";
	plyFile << "element face " << nbTriangles << "\n";
	plyFile << "property list uchar int vertex_indices\n";
	plyFile << "end_header\n";
}

void writeVertices(std::ofstream &plyFile, std::vector< std::vector <Point> > trianglesList) {
	for (int i = 0; i < trianglesList.size(); i++) {
		for (int j = 0; j < trianglesList[i].size(); j++) {
			plyFile << trianglesList[i][j].x << " " << trianglesList[i][j].y << " " << trianglesList[i][j].z << "\n";
		}
	}
}
void writeTriangles(std::ofstream &plyFile, int nbTriangles) {
	for (int i = 0; i < nbTriangles; i++) {
		plyFile << 3 << " " << i*3 << " " << i*3 +1 << " " << i*3 +2 << "\n";
	}
}
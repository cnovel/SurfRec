#include "code.h"

std::vector< std::vector <Point> > triangles(int code, float res, std::vector<int> rotation, Cube c) {
	std::vector< std::vector <Point> > triangles;
	std::vector<Point> t1;
	std::vector<Point> t2;
	std::vector<Point> t3;
	std::vector<Point> t4;
	switch(code) {
		case 0:
			return triangles;
			break;

		case 1:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			return triangles;
			break;

		case 3:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t2);
			return triangles;
			break;

		case 33:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[6]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[1]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[4]]));
			triangles.push_back(t2);
			return triangles;
			break;

		case 65:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[2]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t2);
			return triangles;
			break;

		case 14:
			t1.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[0]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t3);
			return triangles;
			break;

		case 67:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[2]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t3);
			return triangles;
			break;

		case 82:
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[0]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[7]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[5]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[0]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[2]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t3);
			return triangles;
			break;

		case 15:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t2);
			return triangles;
			break;

		case 141:
			t1.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[2]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[2]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			triangles.push_back(t4);
			return triangles;
			break;

		case 85:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[6]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[3]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[5]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[3]]));
			triangles.push_back(t4);
			return triangles;
			break;

		case 77:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[6]], c.listOfPoints[rotation[5]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[2]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t4);
			return triangles;
			break;

		case 30:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[0]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[3]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[7]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[5]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			triangles.push_back(t4);
			return triangles;
			break;

		case 165:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[4]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[3]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[1]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[6]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[1]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[5]], c.listOfPoints[rotation[4]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[4]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[3]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t4);
			return triangles;
			break;

		case 142:
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[7]]));
			t1.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[3]]));
			triangles.push_back(t1);
			t2.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			t2.push_back(meanPoint(c.listOfPoints[rotation[4]], c.listOfPoints[rotation[7]]));
			triangles.push_back(t2);
			t3.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[4]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			t3.push_back(meanPoint(c.listOfPoints[rotation[7]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t3);
			t4.push_back(meanPoint(c.listOfPoints[rotation[0]], c.listOfPoints[rotation[1]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[1]], c.listOfPoints[rotation[5]]));
			t4.push_back(meanPoint(c.listOfPoints[rotation[2]], c.listOfPoints[rotation[6]]));
			triangles.push_back(t4);
			return triangles;
			break;

		default:
			return triangles;
			break;

	}
}

bool acceptable(int code) {
	return (code == 0 || code == 1 || code == 3 || code == 33 || code == 65 || code == 14 || code == 67 || code == 82 || code == 15 || code == 141 || code == 85 || code == 77 || code == 30 || code == 165  || code == 142);
}

int computeCode(std::vector<int> v) {
	int code = 0;
	for (int i = 0; i < v.size(); i++) {
		code += v[i]*pow(2, 7-i);
	}

	return code;
}

int computeRotatedCode(std::vector<int> v, std::vector<int> rot) {
	int code = 0;
	for (int i = 0; i < v.size(); i++) {
		code += v[rot[i]]*pow(2, 7-i);
	}

	return code;
}

std::vector< std::vector<int> > createRotationTable() {
	std::vector< std::vector<int> > rotationTable;
	int a1[] = {0,1,2,3,4,5,6,7};
	int a2[] = {1,5,6,2,0,4,7,3};
	int a3[] = {5,4,7,6,1,0,3,2};
	int a4[] = {4,0,3,7,5,1,2,6};
	int a5[] = {4,5,1,0,7,6,2,3};
	int a6[] = {3,2,6,7,0,1,4,5};
	int a7[] = {3,0,1,2,7,4,5,6};
	int a8[] = {0,4,5,1,3,7,6,2};
	int a9[] = {4,7,6,5,0,3,2,1};
	int a10[] = {7,3,2,6,4,0,1,5};
	int a11[] = {2,1,5,6,3,0,7,4};
	int a12[] = {7,4,0,3,6,5,1,2};
	int a13[] = {2,3,0,1,6,7,4,5};
	int a14[] = {3,7,4,0,2,6,5,1};
	int a15[] = {7,6,5,4,3,2,1,0};
	int a16[] = {6,2,1,5,7,3,0,4};
	int a17[] = {1,0,4,5,2,3,7,6};
	int a18[] = {6,7,3,2,5,4,0,1};
	int a19[] = {1,2,3,0,5,6,7,4};
	int a20[] = {2,6,7,3,1,5,4,0};
	int a21[] = {6,5,4,7,2,1,0,3};
	int a22[] = {5,1,0,4,6,2,3,7};
	int a23[] = {0,3,7,4,1,2,6,5};
	int a24[] = {5,6,2,1,4,7,3,0};

	std::vector<int> r1(a1, a1+8);
	std::vector<int> r2(a2, a2+8);
	std::vector<int> r3(a3, a3+8);
	std::vector<int> r4(a4, a4+8);
	std::vector<int> r5(a5, a5+8);
	std::vector<int> r6(a6, a6+8);
	std::vector<int> r7(a7, a7+8);
	std::vector<int> r8(a8, a8+8);
	std::vector<int> r9(a9, a9+8);
	std::vector<int> r10(a10, a10+8);
	std::vector<int> r11(a11, a11+8);
	std::vector<int> r12(a12, a12+8);
	std::vector<int> r13(a13, a13+8);
	std::vector<int> r14(a14, a14+8);
	std::vector<int> r15(a15, a15+8);
	std::vector<int> r16(a16, a16+8);
	std::vector<int> r17(a17, a17+8);
	std::vector<int> r18(a18, a18+8);
	std::vector<int> r19(a19, a19+8);
	std::vector<int> r20(a20, a20+8);
	std::vector<int> r21(a21, a21+8);
	std::vector<int> r22(a22, a22+8);
	std::vector<int> r23(a23, a23+8);
	std::vector<int> r24(a24, a24+8);

	rotationTable.push_back(r1);
	rotationTable.push_back(r2);
	rotationTable.push_back(r3);
	rotationTable.push_back(r4);
	rotationTable.push_back(r5);
	rotationTable.push_back(r6);
	rotationTable.push_back(r7);
	rotationTable.push_back(r8);
	rotationTable.push_back(r9);
	rotationTable.push_back(r10);
	rotationTable.push_back(r11);
	rotationTable.push_back(r12);
	rotationTable.push_back(r13);
	rotationTable.push_back(r14);
	rotationTable.push_back(r15);
	rotationTable.push_back(r16);
	rotationTable.push_back(r17);
	rotationTable.push_back(r18);
	rotationTable.push_back(r19);
	rotationTable.push_back(r20);
	rotationTable.push_back(r21);
	rotationTable.push_back(r22);
	rotationTable.push_back(r23);
	rotationTable.push_back(r24);

	return rotationTable;
}

std::vector< std::vector <Point> > invertTriangles(std::vector< std::vector <Point> > cubeTriangles) {
	for (int i = 0; i < cubeTriangles.size(); i++) {
		Point swap = cubeTriangles[i][0];
		cubeTriangles[i][0] = cubeTriangles[i][1];
		cubeTriangles[i][1] = swap;
	}

	return cubeTriangles;
}
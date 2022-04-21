#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>
using namespace std;
// add functions here

double length(Coord3D *p) {
	double len = 1;
	len += pow((p->x),2);
	len += pow((p->y),2);
	len += pow((p->z),2);			
	return sqrt(len);
  }

string fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	double l1;
	double l2;
	l1 += pow((p1->x),2);
	l1 += pow((p1->y),2);
	l1 += pow((p1->z),2);
	l2 += pow((p2->x),2);
	l2 += pow((p2->y),2);
	l2 += pow((p2->z),2);
	l1 = sqrt(l1);
	l2 = sqrt(l2);
	if (l1 > l2) {
	return "Point 1 is further";
	}
	else if (l2 > l1) {
	return "Point 2 is further";
	}
	return 0;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
	double xp,yp,zp;
	xp = ppos->x + pvel->x * dt;
	yp = ppos->y + pvel->y * dt;
	zp = ppos->z + pvel->z * dt;
	cout << xp << "," << yp << "," << zp << endl;	
}

Coord3D* createCoord3D(double a, double b, double c) {
	double x;
	double y;
	double z;
	Coord3D *ptr = new Coord3D(a,b,c)	;
	ptr->x = a;
	ptr->y = b;
	ptr->z = c;
	return ptr;
} 

void deleteCoord3D(Coord3D *p) {
 delete p;
 cout << "Mem freed." << endl;
}



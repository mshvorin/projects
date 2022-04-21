#pragma once
#include "coord3d.h"
using namespace std;
// add prototypes here
double length(Coord3D *p);
string fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D *createCoord3D(double a, double b, double c);
void deleteCoord3D(Coord3D *p);

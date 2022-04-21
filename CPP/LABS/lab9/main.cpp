#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
  Coord3D pointP = {10,20,30};
  cout << length(&pointP) << endl;
  Coord3D pointE = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  cout << fartherFromOrigin(&pointE, &pointQ) << endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  Coord3D *ppos = createCoord3D(10, 20, 30);
  cout << "Position " << '{' << ppos->x << ',' << " " << ppos-> y << ',' << " " << ppos-> z << '}' << endl;
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
  cout << "Velocity " << '{' << pvel->x << ',' << " " << pvel-> y << ',' << " " << pvel-> z << '}' << endl;
  cout << "Final position : ";
  move(ppos, pvel, 10.0);
  cout << endl;
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
  
  
  return 0;
}

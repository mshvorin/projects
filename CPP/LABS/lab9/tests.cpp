#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "coord3d.h"
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Length") {
  Coord3D pointP = {10, 20, 30};
  CHECK(((length(&pointP) - 37.4166) < 0.1));
  Coord3D point1 = {100, 0, 0};
  CHECK(((length(&point1) - 100) < 0.1));
  Coord3D point2 = {0, 100, 0};
  CHECK(((length(&point2) - 100) < 0.1));
  Coord3D point3 = {0, 0, 100};
  CHECK(((length(&point3) - 100) < 0.1));
  Coord3D point4 = {3, 4, 0};
  CHECK(((length(&point4) - 5) < 0.1));
  }
  
 
TEST_CASE("Farther") {
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == "Point 1 is further");
  pointP = {100, 0, 0};
  pointQ = {-20, 0, 0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == "Point 1 is further");
  pointP = {0, 125, 0};
  pointQ = {-20, 0, 0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == "Point 1 is further");
  pointP = {0, 0, 250};
  pointQ = {-20, 0, 0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == "Point 1 is further");
  }
  
 TEST_CASE("Velocity Distance") {
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  Coord3D expected = {2, -10, 100.4};
  move(&pos, &vel, 2.0);
  CHECK(pos.x != expected.x);
  CHECK(pos.y != expected.y);
  CHECK(pos.z != expected.z);
  Coord3D pos2 = {0, 0, 0};
  Coord3D vel2 = {0, 0, 0};
  Coord3D expected2 = {0, 0, 0};
  move(&pos2, &vel2, 2.0);
  CHECK(pos2.x == expected2.x);
  CHECK(pos2.y == expected2.y);
  CHECK(pos2.z == expected2.z);
  }
  
  TEST_CASE("Created Pointers") {
  Coord3D *generated1 = createCoord3D(1,2,3);
  Coord3D *generated2 = createCoord3D(123,20,1293);
  Coord3D *generated3 = createCoord3D(-203,23,300);
  Coord3D *generated4 = createCoord3D(0,2,3);
  Coord3D *generated5 = createCoord3D(123,0,1200);
  Coord3D *generated6 = createCoord3D(-1,20,0.5);
  CHECK(sizeof(*generated1) != (NULL));
  CHECK(sizeof(*generated2) != (NULL));
  CHECK(sizeof(*generated3) != (NULL));
  CHECK(sizeof(*generated4) != (NULL));
  CHECK(sizeof(*generated5) != (NULL));
  CHECK(sizeof(*generated6) != (NULL));
}

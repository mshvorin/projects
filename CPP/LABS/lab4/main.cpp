#include <iostream>
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard.h"
#include "checkerboard3x3.h"
#include "box.h"
using namespace std;

int main() {
	cout << "Test for cross(6) : \n\n";
	cout << cross(6);
	cout << "\n";
	cout << "Test for upper(6) : \n\n";
	cout << upper(6);
	cout << "\n";
	cout << "Test for lower(6) : \n\n";
	cout << lower(6);
	cout << "\n";
	cout << "Test for trapezoid(5,2) : \n\n";
	cout << trapezoid(5,2);
	cout << "\n";
	cout << "Test for checkerboard(5,5) : \n\n";
	cout << checkerboard(5,5);
	cout << "\n";
	cout << "Test for checkerboard3x3(4,4) : \n\n";
	cout << checkerboard3x3(4,4);
	cout << "\n";
	cout << "Test for box(5,6) : \n\n";
	cout << box(5,6);
	
	return 0;
}

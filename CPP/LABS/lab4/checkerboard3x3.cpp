#include <iostream>
using namespace std;

string checkerboard3x3(int width, int height) {
/*cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;*/
string asterisk;
string output;
for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
    for (int i = 0; i < 3; i++) {
 if (row % 2 == 0) {
	if (col % 2 == 0) {
	 asterisk += "*";
	    	}
	else if (col % 2 != 0) {
	 asterisk += " ";
	 	}
 	}
  else if (row % 2 != 0) {
    	if (col % 2 == 0) {
    	asterisk += " ";
    	}
    	else if (col % 2 != 0) {
 	asterisk += "*";
 		}
 	}
}
   }
   for (int i = 0; i < 3; i++) {
    output += asterisk;
    output += "\n";
    }
    asterisk = "";
}
return output;
}

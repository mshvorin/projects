#include <iostream>
using namespace std;

string trapezoid(int width, int height) {
string spaces;
string stars;
string output;
/*cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;*/
	
if (width >= height * 2) {
for (int count = 0; count < height; count++) {
    	for (int i = 0; i < width; i++) {
    		if (count == 0) {
		stars += "*";
    	}
}
	output += spaces;
	output += stars;
	output += "\n";
    		stars.erase(stars.size() - 1); 
    		stars.erase(0,1); 
    		spaces += " ";
    	
}
}
else {
	
	output = "Impossible shape!\n";
	}
return output;
}


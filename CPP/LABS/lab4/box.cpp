#include <iostream>
using namespace std;

string box(int width, int height) {
string output;
/*cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;*/
string asterisk;
for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
 	    asterisk += "*";
    }
    output += asterisk;
    output += "\n";
    asterisk = "";
}
return output;
}

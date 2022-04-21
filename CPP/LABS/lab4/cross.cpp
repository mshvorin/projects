#include <iostream>
using namespace std;

string cross(int size) {
/*cout << "Enter the size: ";
cin >> size;*/
string cross = "";
string output;
for (int count = size; count > 0; count--) {
    	for (int i = size; i > 0; i--) {
    		if (i != count) {
    		cross += " ";
    		}
    		else if (i == count) {
    		cross += "\\";
    		}
}
	cross.replace(count, 1, "/");
	output += cross;
	output += "\n";
    	cross = "";

}
return output;
}


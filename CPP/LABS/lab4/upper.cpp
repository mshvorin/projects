#include <iostream>
using namespace std;

string upper(int size) {

///cout << "Enter the size: ";
///cin >> size;
string output;
string cross = "";
for (int count = 0; count < size; count++) {
    	for (int i = 0; i < size; i++) {
    		if (i >= count) {
    		cross += "*";
    		}
    		else {
    		cross += " ";
    		}
    	}
    	output += cross;
    	output += "\n";
    	cross = "";
}
return output;
}

/*int main() {
cout << upper(10);
}*/

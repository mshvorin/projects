#include <iostream>
using namespace std;

void remove_e(string& sentence) {
string newstr = "";
for (char c:sentence) {
	if (c =='e') {
	newstr;
	}
	else {
	newstr += c;
	}
}
cout << newstr << endl;
}
int main() {

remove_e("I ee am ee Hungry ee");
}

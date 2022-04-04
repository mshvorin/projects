#include <iostream>
using namespace std;

void substrpyramid(string input) {
	string newstr;
		for(char c:input) {
			newstr += c;
			cout << newstr << endl;
		}
		for(int i=0;i < newstr.size(); i++) {
			newstr.erase(0);
			cout << newstr << endl;
			
		}
}

int main() {
	substrpyramid("Hello World!");
}

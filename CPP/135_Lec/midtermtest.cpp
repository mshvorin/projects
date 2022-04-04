#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int height;
	cout << "Enter a height : ";
	cin >> height;
	for (int i = 0; i < height; i++) {
		printf("%s", string(height - i + 1, ' ').c_str());
		printf("%s", string(i + 1, '*').c_str());
		cout << "\n";
	}
return 0;
}

#include <iostream>
using namespace std;
int main() {
	int input;
	int input2;
	int input3;
	cout << "Enter a number : ";
	cin >> input;
	cout << "Enter a second number : ";
	cin >> input2;
	cout << "Enter a third number : ";
	cin >> input3;
	if (input < input2 && input2 < input3) {
	cout << "Increasing" << endl;
	}
	else if (input3 < input2 && input2 < input) {
	cout << "Decreasing" << endl;
	}
	else {
	cout << "Neither Increasing nor Decreasing" << endl;
	}
return 0;
}

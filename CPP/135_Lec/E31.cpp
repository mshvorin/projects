#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "Enter a number : ";
	cin >> input;
	if (input > 0) {
	cout << "Positive" << endl;
	}
	else if (input == 0) {
	cout << "Zero" << endl;
	}
	else if (input < 0) {
	cout << "Negative" << endl;
	}
return 0;
}

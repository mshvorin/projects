#include <iostream>
using namespace std;
void sort2(int &a, int &b) {
	if (a > b) {
	int tempa;
	tempa = a;
	a = b;
	b = tempa;
	cout << a << "," << b << endl;
	}
	else {
	cout << a << "," << b << endl;
	}
}

int main() {
	sort2(2,3);
}

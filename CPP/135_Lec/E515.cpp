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

void sort3(int a, int b, int c) {
	sort2(a,b);
	sort2(b,c);
	cout << a << "," << b << "," << c << endl;
}

int main() {
	sort3(6,3,5);
}

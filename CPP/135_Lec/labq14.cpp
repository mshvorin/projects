#include <iostream>
#include <vector>
using namespace std;
vector<int> makeVector(int n) {
	vector<int> returning;
	if (n > 0) {
		for (int i=0; i < n; i++) {
			returning.push_back(i);
		}
		return returning;
	}
	else {
		return returning;
	}
}

int main() {
cout << makeVector(10) << endl;
}

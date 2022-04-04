#include <iostream>
using namespace std;
int main() {
string name;
cout << "Enter a name : ";
cin >> name;
for (char c : name) {
	cout << c << endl;
}
return 0;
}

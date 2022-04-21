#include <iostream>

using namespace std;
bool equals(int a[], int a_size, int b[], int b_size) {
bool isequal = false;	
if (a_size == b_size) {
isequal = true;
}
for (int i=0; i < a_size; i++) {
if (a[i] == b[i]) {
isequal = true;
}
else {
isequal = false;
}
}
return isequal;
}

int main() {

int a1[3] = {1,2,3};
int a2[3] = {1,2,3};
cout << equals(a1, 3, a2, 3) << endl;
return 0;
}

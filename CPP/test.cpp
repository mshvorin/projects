#include <iostream>
using namespace std;

int numDigits(int num) {
static int count = 1;
if (num > -10 && num < 10) {
return count;
}
else {
count ++;
return numDigits(num/10);
}
}
/*
int numDigits(int num) {
if (num > -10 && num < 10) //Or if (abs(num) < 10), or if (num / 10 == 0)
 return 1;
 return numDigits(num / 10) + 1;
}
*/
int main() {

cout << numDigits(14172890) << endl;

}

#include <iostream>
using namespace std;

string middle(string str) {
string result = "";
if (str.size() % 2 != 0) {
result += str.at(str.size() / 2 + 0.5);
}
else {
result += str.at(str.size() / 2);
result += str.at(str.size() / 2 + 1);
}
return result;
}
int main() {
cout << middle("String") << endl;
return 0;
}

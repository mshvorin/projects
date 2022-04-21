#include <iostream>

using namespace std;
// add functions here

string TestAscii(string s){
    cout << "Input here : " << endl;
    getline(cin, s);
    for (char c : s) {
    s += c;
    s += " ";
    s += int(c); 
    s +=  "\n";
    }
   return s;
}

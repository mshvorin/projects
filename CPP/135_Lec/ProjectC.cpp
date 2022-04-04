// Matthew Shvorin
// Comp Sci 135 Project 1C
// Tong Yi
// calc2.cpp
#include <iostream>

using namespace std;

int main() {
    	string s;
    	int start = 0;
    	int total;
    	int number;
    	string operate = "+";
    	char semicolon;
    while(cin >> s) { // While the reading operation is a success
     // print the read word
	if (start == 0 ) { //checks if it is start of a line 
     	total = stoi(s);
     	start = 1;
     	if (s.back() == ';') {
     		total = stoi(s);
     		cout << total << endl;
     		total = 0;
     		start = 1;
        }
        }
        else if (s == "+") { // checks for addition and sets an operation
	operate = "+";
	cout << s << endl;
        }
	else if (s == "-") { // checks for subtraction and sets an operation
	operate = "-";
        }
        else if (s == ";") {
        	cout << total << endl;
		start = 0;
		total = 0;
        }
        else if (s.back() == ';') { //checks if it is the end of a line
        	if ( operate == "+") {
        	total += stoi(s.erase(s.size() - 1));
        }
		if ( operate == "-") {
		total -= stoi(s.erase(s.size() - 1));
		}
	cout << total << endl;
		start = 0;
		total = 0;
	}
	else { // checks if it is a number and adds based on the operator
        if ( operate == "+") {
        	total += stoi(s);
        	cout << s << endl;	
        }
        if ( operate == "-") {
        	total -= stoi(s);
        	cout << s << endl;
	}
		}
	//cin >> semicolon;
	//if (semicolon
    }
	return 0;
}

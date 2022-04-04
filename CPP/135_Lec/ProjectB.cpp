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
    	char operate = '+';
    	char stoc;
    	string f;
    while (cin >> f) { // While the reading operation is a success
     // print the read word
	for (int i = 0; i < f.size(); i++){
	stoc = f[i];
	s.push_back(stoc);
    	for(int i = 0; i<s.length(); i++) {
     	//cout << s << " " << s[i] << endl;
	if (s[i] == '+') { // checks for addition and sets an operation
	operate = '+';
        }
	else if (s[i] == '-') { // checks for subtraction and sets an operation
	operate = '-';
        }
        
        else if (s[i] == ';') {
        	//cout << total << " H" << endl;
		start = 0;
		total = 0;
        }
	else if (start == 0 ) { //checks if it is start of a line 
     	total = stoi(s);
     	start = 1;
     	if (s.back() == ';') {
     		total = stoi(s);
     		//cout << total << " B" << endl;
     		total = 0;
     		start = 1;
        	}
        		}
        else if (s.back() == ';') { //checks if it is the end of a line
        	if ( operate == '+') {
        	total += stoi(s.erase(s.size() - 1));
        }
		if ( operate == '-') {
		total -= stoi(s.erase(s.size() - 1));
		}
		cout << total << endl;
		start = 0;
		total = 0;
	
	}
	else { // checks if it is a number and adds based on the operator
        if ( operate == '+') {
        	total += stoi(s);	
        }
        if ( operate == '-') {
        	total -= stoi(s);
		} 	
    	}
    	}
    }
    	}
	return 0;
}


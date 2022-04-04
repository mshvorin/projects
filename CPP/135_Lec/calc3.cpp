#include <iostream>
#include <math.h>  
using namespace std;

int main() {
	string f;
	int start ;
	int total = 0;
	string initnum;
	int num;
	int counter = 0;
	char operate = ' ';
	char postop = ' ';
	char preop = ' ';
	bool power = false;
	while (cin >> f) {
	for (char c : f) {
        if (c == ';') { //checks if it is the end of a line    
        	if (counter == 0) {
        	cout << initnum << endl;
        	total = 0;
        	start = 0;
        	initnum = "";
        	} 
        	else {
        	if ( postop == '+') {
		cout << total + stoi(initnum) << endl;
		}
		else if ( postop == '-') {
		cout << total - stoi(initnum) << endl;
		}
		else if (power == true) {
		cout << total << endl;
		power = false;
		}
		start = 0;
		total = 0;
		initnum = "";
		}
	}
	else if (c == '+') { // checks for addition and sets an operation
		//cout << initnum << endl;
        	int num = stoi(initnum);
        	if (postop == '+' || postop == ' ') {
        	total += num;
        	}
        	else if (postop == '-') {
        	total -= num;
        	}
        	//cout << total << endl;
        	counter = 1;
        	postop = '+';
        	initnum = "0";
        }
	else if (c == '-') { // checks for subtraction and sets an operation
		//cout << initnum << endl;
        	int num = stoi(initnum);
        	if (postop == '-' || postop == ' ') {
        	total -= num;
        	}
        	else if (postop == '+') {
        	total += num;
        	}
        	//cout << total << endl;
        	postop = '-';
        	counter = 1;
        	initnum = "0";
        }
        else if (c == '^') {
        int num = stoi(initnum);
        	if (postop == '+' || postop == ' ') {
        	total += pow(num,2);
        	}
        	else if (postop == '+') {
        	total -= pow(num,2);
        	}
        	//cout << total << endl;
        	postop = ' ';
        	counter = 1;
        	initnum = "0";
        	power = true;
        }
	else { // checks if it is a number and adds based on the operator
	initnum += c;
		}
	}
}
return 0;
}

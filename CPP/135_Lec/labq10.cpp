#include <iostream>
using namespace std;
int unbalanced_brackets(string input) {
int obrack = 0;
int cbrack = 0;
for (char c:input) {
	if (c == '{') {
	obrack++;
	}
	else if ( c == '}') {
	cbrack++;
	}
}
return obrack - cbrack;
}



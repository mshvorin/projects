#include <iostream>
#include <string.h>
#include <fstream>
#include "lab.h"
using namespace std;


string removeLeadingSpaces(string line) {
	int i = 0;
	for (char c: line) {
	if (isspace(c)) {
	i++;
	}
	if (isalpha(c)) {
	break;
	}
	}
	line.erase(0,i);
	return line;

}

int countChar(string line, char c) {
	int count = 0;
	for(char f:line) {
	if (f == c)  {
	count++;
	}
	else {
	continue;
	}
	}
return count;
}

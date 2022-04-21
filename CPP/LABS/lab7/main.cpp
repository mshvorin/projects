#include <iostream>
#include <string.h>
#include <fstream>
#include "lab.h"

using namespace std;

int main() {
	string lines;
	ifstream openfile;
	openfile.open("bad-code.cpp");
	string rightbrackettabs;
	while(getline(openfile, lines)) {
		cout << rightbrackettabs << removeLeadingSpaces(lines) << endl;
		for (int i = 0; i < countChar(lines, '{');i++) {
				rightbrackettabs += "\t";
				}
			for (int i = 0; i < countChar(lines, '}');i++) {
			rightbrackettabs.erase(0,1);
			}
		}
	return 0;
	}


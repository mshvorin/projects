#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reverseorder.h"

using namespace std;

void reverse_order(string date1, string date2) {

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
}
string junk; 
getline(fin, junk);
string datetsv;

int i = 0;
bool timeframe = false;
string days[365];
double elevations[365];
double eastSt, eastEl, westSt, westEl;
	while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) {
   	 fin.ignore(INT_MAX, '\n'); 
   	 
   	if (datetsv == date1) {
   	 timeframe = true;
   	}
   	if (timeframe == true) {
    		elevations[i] = westEl;
    		days[i] = datetsv;
    		i = i + 1;
    	}
    	if (datetsv == date2) {
    	timeframe = false;
    	}
    }
    for (i-1; i>-1 ; i--) {
   cout << days[i] << " : " << elevations[i] << endl;

}
}


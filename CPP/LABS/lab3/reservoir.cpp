// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

double get_east_storage(string date) {
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
}
string junk; 
getline(fin, junk);
string datetsv;
double eastSt, eastEl, westSt, westEl;
	while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) { 
   	 fin.ignore(INT_MAX, '\n'); 
    if (datetsv == date) {
    return eastSt;
    }
   // cout << datetsv << " : " << eastSt << endl;
}
return 0;
}

double get_min_east() {
	double minimum = INT_MAX;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	    cerr << "File cannot be opened for reading." << endl;
	    exit(1); 
	}
	string junk; 
	getline(fin, junk);
	string datetsv;


	double eastSt, eastEl, westSt, westEl;
		while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) { 
	   	 fin.ignore(INT_MAX, '\n'); 
		if (eastSt < minimum) {
		minimum = eastSt;
		}
	return minimum;
	}
	return 0;
}

double get_max_east() {
	double maximum;
	maximum = 0;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	    cerr << "File cannot be opened for reading." << endl;
	    exit(1); 
	}
	string junk;
	getline(fin, junk);
	string datetsv;
	double eastSt, eastEl, westSt, westEl;
	while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) {
	fin.ignore(INT_MAX, '\n');
	if (eastSt > maximum) {
		maximum = eastSt;
		}
	return maximum;
	}
	return 0;
}

std::string compare_basins(std::string date) {

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
}
string junk; 
getline(fin, junk);
string datetsv;
string west = "West";
string east = "East";
int east1;
int west1;
double eastSt, eastEl, westSt, westEl;
	while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) { 
   	 fin.ignore(INT_MAX, '\n'); 
    if (datetsv == date) {
    east1 = eastEl;
    }
    while(fin >> datetsv >> eastSt >> eastEl >> westSt >> westEl) { 
   	 fin.ignore(INT_MAX, '\n'); 
    if (datetsv == date) {
    west1 = westEl;
    }
	if (west1 > east1) {
    	return west;
    }
	else if (east1 > west1) {
    	return east;
	}
	else {
	return "They are Equal.";
	}
}
;
}
return 0;
}
			


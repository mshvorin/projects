#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string line;
	string lines;
	string output;
	
	ofstream infile;
	infile.open("hello.txt");
	
	infile << "Hello, World!";
	infile.close();
	
	ifstream(outfile);
	outfile.open("hello.txt");
	
	while (getline(outfile, lines)) {
	cout << lines << endl;
	}
return 0;
}

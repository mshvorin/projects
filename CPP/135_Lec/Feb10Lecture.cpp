#include <iostram>
using namespace std;
int main() {
	int index
	size_t index = name.find(" ");
	if (index == string::npos) 
	if (index < 0)
	{
	cerr << "no space in input name cannot proceed" << endl;
	return -1;
	}

	string firstname = name.substr(0,index);
	string lastname = name.substtr(index + 1);
	cout << lastname + "," + firstname << endl;
	
	return 0;

}

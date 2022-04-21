#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

using namespace std;

int main()
{
string day = "05/20/2018";
string day2 = "05/26/2018";
	cout << "The total storage in the east basin on " << day << " is " << get_east_storage(day) << " Billion Gallons" << endl;
	cout << get_min_east() << " is the minimum and " << get_max_east() << " is the maximum storage in billions of gallons." << endl;
	cout << compare_basins(day) << endl;
	reverse_order("02/23/2018", "12/30/2018");
  return 0;
}

#include <iostream>
/*Matthew Shvorin CSI 135*/

 int main () {
 	float gallons;
 	float fuel_efficiency;
 	float ppg;
 	std::cout << "Enter number of gallons in the tank : " << std::endl;
 	std::cin >> gallons;
 	std::cout << "Enter the fuel efficiency of the vehicle : " << std::endl;
 	std::cin >> fuel_efficiency;
 	std::cout << "Enter the price of gas per gallon : " << std::endl;
 	std::cin >> ppg;
 	float priceper100 = (100 / fuel_efficiency) * ppg;
 	float distance = gallons * fuel_efficiency;
 	std::cout << "You can go " << distance << " miles currently, and your cost per 100 miles is $" << priceper100 << "." << std::endl;
 	return 0;
 	}

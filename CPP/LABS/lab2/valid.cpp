#include <iostream>
//Matthew Shvorin Lab 2

//Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
//If the number is out of range, the program should keep asking to re-enter until a valid number is input.

//After a valid value is obtained, print this number n squared.
int main() {
	int Number;
	std::cout << "Please enter a number between 0 and 100.\n" << std::endl;
	std::cin >> Number; //input of initial number
	while (Number < 1 or Number > 99) {
	std::cout << "Please enter another number.\n" << std::endl; 
	std::cin >> Number; //input of final number
	} 
	std::cout << Number * Number << std::endl; //squares the number
	return 0; 
}

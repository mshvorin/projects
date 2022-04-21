#include <iostream>
//Matthew Shvorin Lab 2

//Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. 
//Notice that we include the lower limit, but exclude the upper limit.

//You can use any loop construct to achieve this result, but the most idiomatic way to do such an iteration in C++ is to use a for loop that starts with a counter variable i = L and keeps iterating while i < U:


//As a side note, also notice that if you change the middle condition in the loop to i <= U, then the iteration would go from L to U inclusive its upper bound (L ≤ i ≤ U).


int main (){
	int L;
	int U;
	std::cout << "Please Enter L: " << std::endl;
	std::cin >> L;
	std::cout << "Please Enter U: " << std::endl;
	std::cin >> U;
	do {
	std::cout << L << " "; //prints interval  
	L++; //adds 1 to initial interval number
	} while (L < U );
	
	
	return 0;
}

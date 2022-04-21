#include <iostream>
//Matthew Shvorin Lab 2

/*
Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/
//The repetition of the steps 3-4-5 can be implemented with a do while loop
//The program should keep running until the user inputs an out-of-range (invalid) index.
//Test your program. Check that all array elements are editable, for instance, use the program interface to make it print out sequence 5 10 15 20 25 30 35 40 45 50. Check that all possible edge cases are correctly handled, and the program exits when invalid index is input.



int main() {
	int i = 1;
	int v = 1;
	int mydata [] = {1,1,1,1,1,1,1,1,1,1};
		std::cout << "Enter a index : ";
		std::cin >> i;
		std::cout << "Enter a number : ";
		std::cin >> v;
		mydata[i] = v;
	for (int f = 0; f < 10 ; f++ ) {
	std::cout << mydata[f] << std::endl;
	}
	while (i < 10 and i > -1) {

		std::cout << "Enter a index : ";
		std::cin >> i;
		std::cout << "Enter a number : ";
		std::cin >> v;
		mydata [i] = v;
		for (int f = 0; f < 10 ; f++ ) {
		std::cout << mydata[f] << " ";
	}

	}
		

}

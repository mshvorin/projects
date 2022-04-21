#include <iostream>
//Matthew Shvorin Lab 2

//Task - 
//Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).

//Once your program is complete and works, check carefully the values printed on the screen. Specifically, what is happening when the numbers approach two billions? 
//We expect that at some point the numbers start diverging from what they should be. 
//Describe what you observe and explain why it is happening in a program comment.


int main() {
	int i = 2;
	int fib [60];
	fib[0] = 0;
	fib[1] = 1;
	std::cout << "0\n" ;
	std::cout << "1\n" ;
	while (i > 1 and i < 60) {
		fib[i] = fib[i-1] + fib [i-2];
		std::cout << fib[i] << std::endl;
		i++;
	}
}
//as the numbers get larger, the program is unable to keep up with the size, which is why we must declare the variable as long to allow for alonger integer and unsign it so it does not become negative a certain way through.

#include <iostream> 
#include <ctype.h>
#include "recursion.h"
using namespace std;

int main() {
	    cout << printRange(1,10) << endl;
	    int sum10 = sumRange(1,10);
	    cout << sum10 << endl;
	    int size = 10;
	    int *arr = new int[size]; // allocate array dynamically
	    arr[0] = 12;
	    arr[1] = 17;
	    arr[2] = -5;
	    arr[3] = 3;
	    arr[4] = 7;
	    arr[5] = -15;
	    arr[6] = 27;
	    arr[7] = 5;
	    arr[8] = 13;
	    arr[9] = -21;
	    int sum1 = sumArray(arr, size); // Add all elements
   	    cout << "Sum is " << sum1 - 60705 << endl;
   	    cout << isAlphanumeric("Cand1y") << endl;
   	    cout << nestedParens("(())") << endl;
   	    int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
   	    cout << "Is it divisible by the two? " << divisible(prices, 9) << endl;
}

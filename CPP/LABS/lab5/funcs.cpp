#include <iostream>
#include "funcs.h"

using namespace std;
// add functions here
bool isDivisibleBy(int n, int d) {
	if (n % d == 0) { 
		return true;
	}
	else {
	return false;
	}
}

bool isPrime(int n){
	if (n % 2 != 0 && n % 3 != 0 && n % 4 != 0 && n % 5 != 0 && n % 6 != 0 && n % 7 != 0 && n % 8 != 0 && n % 9 != 0 || n==2 || n==3 || n==5 || n==7) {
	return true;
	}
	else {
	return false;
	}
}

int nextPrime(int n) {
	n++;
	while (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0 || n % 6 == 0 || n % 7 == 0 || n % 8 == 0 || n % 9 == 0) {
		n++;
	}
	return n;
}

int countPrimes(int a, int b) {
	int count = 0;
	while (a <= b) {
		if (a % 2 != 0 && a % 3 != 0 && a % 4 != 0 && a % 5 != 0 && a % 6 != 0 && a % 7 != 0 && a % 8 != 0 && a % 9 != 0 || a==2 || a==3 || a==5 || a==7) {
		count++;
		a++;
		}
		else {
		a++;
		}
	}
	return count;
}

bool isTwinPrime(int n) {
	if (n % 2 != 0 && n % 3 != 0 && n % 4 != 0 && n % 5 != 0 && n % 6 != 0 && n % 7 != 0 && n % 8 != 0 && n % 9 != 0 && (n + 2) % 2 != 0 && (n + 2) % 3 != 0 && (n + 2) % 4 != 0 && (n + 2) % 5 != 0 && (n + 2) % 6 != 0 && (n + 2) % 7 != 0 && (n + 2) % 8 != 0 && (n + 2) % 9 != 0) {
	return true;
	}
	else { 
	return false; 
		}
	}

int nextTwinPrime(int n){
	n++;
	while (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0 || n % 6 == 0 || n % 7 == 0 || n % 8 == 0 || n % 9 == 0 || (n + 2) % 2 == 0 || (n + 2) % 3 == 0 || (n + 2) % 4 == 0 || (n + 2) % 5 == 0 || (n + 2) % 6 == 0 || (n + 2) % 7 == 0 || (n + 2) % 8 == 0 || (n + 2) % 9 == 0) {
	n++;
	}
	return n;
	}
		
int largestTwinPrime(int n, int b) {
	int largest;
	while (n <= b) {
	if (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0 || n % 6 == 0 || n % 7 == 0 || n % 8 == 0 || n % 9 == 0 || (n + 2) % 2 == 0 || (n + 2) % 3 == 0 || (n + 2) % 4 == 0 || (n + 2) % 5 == 0 || (n + 2) % 6 == 0 || (n + 2) % 7 == 0 || (n + 2) % 8 == 0 || (n + 2) % 9 == 0) {
	n++;
	} 
	else {
	 largest = n;
	 n++;
	}
	}
   return largest;
}



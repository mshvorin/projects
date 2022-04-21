#include <iostream> 
#include <ctype.h>
#include "recursion.h"
#include <string>
using namespace std;

string printRange(int left, int right) {
	static int count;
	static string nstring = "";
	if ( count == 0) {
	nstring = "";
	}
	if (left < right) {
	count = 1;
	nstring += to_string(left);
	return printRange(left + 1, right);
	}
	else {
	count = 0;
	return nstring;
	nstring = "";
	}
}

int sumRange(int left, int right) {
	if ( left < right) {
		return left + sumRange(left + 1, right);
	}
	else {
		return left;
	}
}

int sumArray(int *arr, int size) {
	if (size > 0) {
	return arr[size] + sumArray(arr,size-1);
	}
	else {
	return arr[size];
	}
}

bool isAlphanumeric(string s) {
	if (s.length() == 0) {
	return true;
	}
	if (isalnum(s[0]) == false) {
	return false;
	}
	else {
	return isAlphanumeric(s.substr(1,s.length() - 1));
	}
}

bool nestedParens(string s) {
if (s.length() % 2 != 0 || s[0] != '(' || s[s.length()-1] != ')') {
return false;
}
if (s == "()") {
return true;
}
else {
s.erase(0,1);
s.erase(s.length()-1,1);
return nestedParens(s);
}
}

bool divisible(int *prices, int size) {
	if (size > 0) {
	return prices[0] += prices[size];
	}
	else {
		if ( prices[0] % 2 == 0 ) {
		return true;
		}
		else {
		return false;
		}
	}
}

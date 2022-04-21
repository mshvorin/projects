#include <iostream>
using namespace std;

string encryptCaesar(string plaintext, int rshift) {
	string deciphered;
	for (char c : plaintext) {
		if (isalpha(c)) {
		if (isalpha(char(int(c) + rshift))) {
		deciphered += char(int(c) + rshift);
			}
		else if (ispunct(char(int(c) + rshift))) {
		deciphered += char(int(c) + rshift - 26);
		}
			}
		else {
		deciphered += c;
			}
	}
	return deciphered;
}
	
char shiftChar(char c, int rshift) {
	return char(int(c) + rshift);
	}

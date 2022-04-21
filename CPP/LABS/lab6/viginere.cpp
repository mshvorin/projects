#include <iostream>
using namespace std;

	string encryptVigenere(string plaintext, string keyword) {
	string deciphered;
	int i=0;
	for (char c : plaintext) {
		if ('a' <= c <= 'z') {
		if (i < keyword.size()) {
		if (isalpha(c)) {
		if (isalpha(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97);
			}
		else if (ispunct(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97  - 26);
			}
		}
		else {
		deciphered += c;
			}
		i++;
		}
		else if ( i >= keyword.size()) {
		i = 0;
		if (isalpha(c)) {
		if (isalpha(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97);
			}
		else if (ispunct(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97  - 26);
			}
		}
		else {
		deciphered += c;
			}
		}
		}
		else if ('A' <= c <= 'Z') {
		if (i < keyword.size()) {
		if (isalpha(c)) {
		if (isalpha(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97);
			}
		else if (ispunct(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97  - 65);
			}
		}
		else {
		deciphered += c;
			}
		i++;
		}
		else if ( i >= keyword.size()) {
		i = 0;
		if (isalpha(c)) {
		if (isalpha(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 65);
			}
		else if (ispunct(char(int(c) + int(keyword.at(i))-97))) {
		deciphered += char(int(c) + int(keyword.at(i)) - 97  - 26);
			}
		}
		else {
		deciphered += c;
}
}
}
}
return deciphered;
}

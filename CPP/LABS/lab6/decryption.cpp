#include <iostream>
using namespace std;

string decryptCaesar(string ciphertext, int rshift) {
string decyphered = "";
	for (char c : ciphertext) {
		if (isspace(c) || ispunct(c)) {
		decyphered += c;
		}
		else if ('A' <= c <= 'Z') {
		if (c - rshift >= 65) {
		decyphered += char(c - rshift);
		}
		else if (c - rshift < 65) {
		decyphered += char('Z'- c + 'A');
		}
			}
		else if ('a' <= c <= 'z') {
		if (c - rshift < 97) {
		decyphered += char('z'- c + 'a');
		}
		else if (c - rshift >= 97) {
		decyphered += char(c - rshift);
		}
			}
		else {
		decyphered += c;
			}
		}
return decyphered;
}

string decryptVigenere(string ciphertext, string keyword) {

return 0;

}

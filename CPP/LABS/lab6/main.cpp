#include <iostream>
#include "caesar.cpp"
#include "funcs.h"
#include "viginere.cpp"
#include "decryption.cpp"

using namespace std;
int main()
{
	cout << encryptCaesar("How are you?", 5) << endl;
	cout << shiftChar('f', 5) << endl;	
	cout << encryptVigenere("arctic", "ABC") << endl;
	cout << decryptCaesar("Mtb fwj dtz?", 5) << endl;
	cout << char('a' + 10) << endl;
  return 0;
}

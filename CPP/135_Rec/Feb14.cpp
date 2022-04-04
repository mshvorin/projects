#include <iostream>

int main() {

std::string s;
double d;
int i;
std::cin >> s;

try {
 	d = std::stold(s);
 	std::cout << d << "\n";
  } catch  {
  	
  }


}

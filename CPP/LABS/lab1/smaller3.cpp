/* Matthew Shvorin Lab1 CS135*/
#include <iostream>

int main(){

  int num1;
  int num2;
  int num3;

  std::cout << "Enter your first number : ";
  std::cin >> num1;

  std::cout << "Enter your second number : ";
  std::cin >> num2; 

  std::cout << "Enter your third number : ";
  std::cin >> num3; 

  if (num1 < num2) {
    if (num1 < num3) {
      std::cout << num1 << std::endl;
    }
    if (num3 < num1) {
      std::cout << num3 << std::endl;
    }
    if (num1 == num3) {
      std::cout << num1 << std::endl;
    }
  }
  else if (num2 < num1) {
    if (num2 < num3) {
      std::cout << num2 << std::endl;
    }
    if (num3 < num2) {
      std::cout << num3 << std::endl;
    }
    if (num3 == num2) {
      std::cout << num3 << std::endl;
    }
  }
  else if (num1 == num2) {
    if (num1 < num3) {
      std::cout << num1 << std::endl;
    }
    if (num3 < num1) {
      std::cout << num3 << std::endl;
    }
  }
  return 0;
}

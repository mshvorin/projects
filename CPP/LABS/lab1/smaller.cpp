/* Matthew Shvorin Lab1 CS135*/

#include <iostream>
int main(){
  int num1;
  int num2;

  std::cout << "Enter your first number : ";
  std::cin >> num1;
  std::cout << "Enter your second number : ";
  std::cin >> num2; 
  if (num1 > num2) {
    std::cout << num2 << std::endl;
  }
  else if (num2 > num1) {
    std::cout << num1 << std::endl;
  }
  else if (num1 == num2) {
    std::cout << "Same number!" << std::endl;
  }
  return 0;
}

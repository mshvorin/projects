/* Matthew Shvorin Lab1 CS135*/
#include <iostream>

int main(){

  int year;
  std::cout << "Enter the year: ";
  std::cin >> year;

  if (year % 4 !=0) {
    std::cout << "Common Year" << std::endl;
  }
  else if (year % 4 == 0 and year % 100 != 0) {
    std::cout << "Leap Year!" << std::endl;
  }
  else if (year % 400 == 0) {
    std::cout << "Leap Year!" << std::endl;
  }
  else {
    std::cout << "Common Year" << std::endl;
  }
  return 0;
}

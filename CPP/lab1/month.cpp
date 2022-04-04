/* Matthew Shvorin Lab1 CS135*/
#include <iostream>

int main () {
    int year;
    bool leap;
    int month;
  std::cout << "Enter Year here: ";
  std::cin >> year;
  std::cout <<"Enter Month here : ";
  std::cin >> month;

  if (year % 4 !=0) {
    leap = false;
  }
  else if (year % 4 == 0 and year % 100 != 0) {
    leap = true;
  }
  else if (year % 400 == 0) {
    leap = true;
  }
  else {
    leap = false;
  }

  if (month == 2) {
    if (leap == true)
    {
      std::cout << "29 days" << std::endl;
    }
    else {
      std::cout << "28 days" << std::endl;
    }
  }
  else if (month < 8) {
    if (month % 2 == 0) {
      std::cout << "30 days" << std::endl;
    }
    else {
      std::cout << "31 days" << std::endl;
    }
  }
  else if (month > 7) {
    if (month % 2 == 0) {
      std::cout << "31 days" << std::endl;
    }
    else {
      std::cout << "30 days" << std::endl;
    }
  }
  return 0;
}

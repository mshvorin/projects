#include <iostream>
using namespace std;
class Date {
public: 
int year,month,day;
string day_of_week;
Date (int Month, int Day, int Year, string DOW) {
month = Month;
day = Day;
year = Year;
day_of_week = DOW;
}
};

string printDate(Date day) {
string str = "";
return str + day.day_of_week + ", " + to_string(day.month) + "/" + to_string(day.day) + "/" + to_string(day.year);
}

/*int main() {
Date Today(12, 6, 2021, "Monday");
cout << printDate(Today) << endl;
}*/

#include <iostream>
#include "solutions.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"
using namespace std;
int main() {


Time tim = {10,10};
Time later = {21,20};
cout << "The time is : ";
printTime(tim);
cout << "The time from " << tim.h << ":" << tim.m << " since midnight is " << minutesSinceMidnight(tim) << " minutes." << endl;
cout << "The time from " << tim.h << ":" << tim.m << " until " << later.h << ":" << later.m << " is " << minutesUntil(tim,later) << " minutes." << endl;
printTime(addMinutes(tim, 135));

  Movie movie1 = {"Jujutsu Kaisen 0", ACTION, 105};
  Movie movie2 = {"Uncharted", ACTION, 115};
  Movie movie3 = {"Hotel Transylvania: Transformania", COMEDY, 87};
  Movie movie4 = {"Spider-Man: No Way Home", ACTION, 150};
  
  TimeSlot morning = {movie1, {9, 33}};
  TimeSlot lateMorning = {movie3, {10, 19}};
  TimeSlot afternoon = {movie2, {15, 0}};
  TimeSlot evening = {movie4, {19, 15}};
  TimeSlot night = {movie1, {21, 37}};
  cout << "\n" << getTimeSlot(lateMorning) << endl;
 TimeSlot beforeAfternoon = scheduleAfter(lateMorning, movie4);
 cout << "\n" << getTimeSlot(beforeAfternoon) << endl;
 cout << "If printing 1 it is an overlap - Printing...\n" << timeOverLap(morning, night) << endl;


return 0;
}

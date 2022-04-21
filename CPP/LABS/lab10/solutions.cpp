#include <iostream>
using namespace std;
#include "time.h"
#include "solutions.h"
#include "movie.h"
#include "timeslot.h"

void printTime(Time time) {
    cout << time.h << ":" << time.m << endl;
}

int minutesSinceMidnight(Time time) {
	int minutes = 0;
	minutes += time.h * 60;
	minutes += time.m;
	return minutes;
}

int minutesUntil(Time earlier, Time later) {
	int different = 0;
	different = different + later.h * 60 + later.m - earlier.h * 60 - earlier.m; 
	return different;
}

Time addMinutes(Time time0, int min) {
	Time newtime = {0,0};
	while ((time0.m + min) >= 60) {
	time0.h += 1;
	min = min - 60;
	}
	time0.m += min;
	newtime.h = time0.h;
	newtime.m = time0.m;
	return newtime;
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}	

string getTimeSlot(TimeSlot ts){
  printMovie(ts.movie);
  cout << " ";
  string printTime = "[starts at ";
  if(ts.startTime.h == 0){
    printTime += "00";
  }else{
    printTime += std::to_string(ts.startTime.h) + ":";
  }
  if(ts.startTime.m == 0){
    printTime += "00";
  }else{
    printTime += to_string(ts.startTime.m);
  }
  Time ending = ts.startTime;
  int minutes = minutesSinceMidnight(ending);
  minutes += ts.movie.duration;
  ending = {0, 0};
  ending = addMinutes(ending, minutes);
  printTime += ", ends by " + to_string(ending.h) + ":";
  if(ending.m == 0){
    printTime += "00]";
  }else{
    printTime += to_string(ending.m) + "]";
  }
  return printTime;
  }
  
  TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
  	Time end = ts.startTime;
  	int mins = minutesSinceMidnight(end);
  	mins += ts.movie.duration;
  	end = {0,0};
  	end = addMinutes(end, mins);
  	TimeSlot next = {nextMovie, end};
  	return next;
  }
  
  bool timeOverLap(TimeSlot ts1, TimeSlot ts2) {
  Time ending1 = addMinutes(ts1.startTime, ts1.movie.duration);
  Time ending2 = addMinutes(ts2.startTime, ts2.movie.duration);
  if(ts1.startTime.h > ts2.startTime.h && ts1.startTime.h <= ending2.h){
    return true;
  }else if(ts1.startTime.h = ts2.startTime.h){
    return true;
  }else if(ts1.startTime.h < ts2.startTime.h && ending1.h > ts2.startTime.h){
    return true;
  }else{
    return false;
  }
  }

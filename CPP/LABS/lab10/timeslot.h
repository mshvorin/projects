#pragma once
#include "movie.h"
#include "time.h"
using namespace std;
class TimeSlot {
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};
void printMovie(Movie mv);

string getTimeSlot(TimeSlot ts);

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

bool timeOverLap(TimeSlot ts1, TimeSlot ts2);

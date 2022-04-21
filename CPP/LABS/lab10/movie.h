#pragma once

using namespace std;
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
	    Movie(string Title, Genre GENRE, int Duration) {
	    title = Title;
	    genre = GENRE;
	    duration = Duration;
	    }
};



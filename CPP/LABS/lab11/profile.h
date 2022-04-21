#pragma once
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn) {
    username = usrn;
    displayname = dspn;
    }
    // Default Profile constructor (username="", displayname="")
    Profile() {
    username = "";
    displayname = "";
    }
    string getUsername() {
  	return username;//returns private variable username
}
 std::string getFullName() {
   string name = displayname + " (@" + username + ") ";
   return name;// returns full name
 }
 void setDisplayName(string dspn) {
   displayname = dspn;//change display name
 }
};

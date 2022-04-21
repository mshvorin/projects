#pragma once
#include <ctype.h>


using namespace std;

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
  		                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn) {
  for (int i=0;i < MAX_USERS;) {
  	if (profiles[i].getUsername() == usrn) {
  	return i;
  	}
  	else {
  	i++;
  		}
  	}
  	return -1;
  }
 bool following[MAX_USERS][MAX_USERS];
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network() {
  numUsers = 0;
  }
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn) {
  if (numUsers < 20) {
  for (int i=0;i < numUsers; i++) {
  	if (profiles[i].getUsername() == usrn) {
  	return 0;
  	}
  	for (char c:(profiles[i].getUsername())) {
  	if(isalnum(c) == 0) {
  	return 0;
  		}
 	 }
  continue;
  }
  profiles[numUsers] = {usrn,dspn};
  numUsers += 1;
  return 1;
  }
	  else {
	  return 0;
	  }
  }
  bool initialfollowing() {
  	 for (int i=0;i<MAX_USERS;i++) {
    	for (int j=0;j<MAX_USERS;j++) {
    		following[i][j] = 0;
    	}
	}
	return 0;
  }
  bool follow(string usrn1, string usrn2){
  	bool inone;
  	bool intwo;
  for (int i=0;i < numUsers; i++) {
  	if (profiles[i].getUsername() == usrn1) {
  	inone = 1;
  	}
  	else if (profiles[i].getUsername() == usrn2) {
  	intwo = 1;
  	}
  	else {
  	continue;
  		}
  	}
  	if (inone == intwo == 1) {
  	following[findID(usrn1)][findID(usrn2)] = 1;
  	return 1;
  	}
  	else {
  	return 0;
  	}
  }
 void printDot() {
    cout << "Digraph { " << endl;
    for (int i=0;i < numUsers;i++) {
    cout << "\"@" + profiles[i].getUsername() << "\"" << endl;
    }
    for (int i=0;i<numUsers;i++) {
    	for (int j=0;j<numUsers;j++) {
    		if (profiles[i].getUsername() == profiles[j].getUsername()) {
    		profiles[i];
    		}
    		else if(following[i][j]==1) {
    			string newi;
    			string newj;
    			newi = "\"@" + profiles[i].getUsername() + "\"";
    			newj = "\"@" + profiles[j].getUsername() + "\"";
    			cout << newi << "->" << newj << endl;
    			newi = "";
    			newj = "";
  				}
 			 }
 		}	
	cout << "}" << endl;
  }
};

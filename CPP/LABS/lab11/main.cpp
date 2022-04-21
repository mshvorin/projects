#include <iostream>
#include "profile.h"
#include "network.h"
using namespace std;

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
    Network naw;
    cout << naw.addUser("mario", "Mario") << endl;     // true (1)
    cout << naw.addUser("luigi", "Luigi") << endl;     // true (1)
    cout << naw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << naw.addUser("luigi", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++) {
      cout << naw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)
  cout << naw.addUser("yoshi", "Yoshi") << endl; 
  }    // false (0)
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}

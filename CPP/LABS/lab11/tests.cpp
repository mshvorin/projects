#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"



TEST_CASE("Checks the getUsername function"){
  Profile prof1("Jackson", "Jack");
  CHECK((prof1.getUsername()) == "Jackson");
}

TEST_CASE("Checks the getFullName function"){
  Profile prof2("Jackson", "Jack");
  CHECK((prof2.getFullName()) == "Jack (@Jackson) " );
}

TEST_CASE("Tests changing the displayname from Jack to John"){
Profile prof3("Jackson", "Jack");
  prof3.setDisplayName("John");
  CHECK((prof3.getFullName()) == "John (@Jackson) ");
}

TEST_CASE("Tests the add user function when a user already exists"){
  Network nw;
  CHECK(nw.addUser("mario", "MARIO") == 1);
  CHECK(nw.addUser("mario", "MArio") == 0);
}

TEST_CASE("Networking Following") {
  Network nw;
  // add three users
  CHECK(nw.addUser("mario", "Mario") == true);
  CHECK(nw.addUser("luigi", "Luigi") == true);
  CHECK(nw.addUser("yoshi", "Yoshi") == true);
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");

  // make them follow each other
  CHECK(nw.follow("mario", "luigi") == true);
  CHECK(nw.follow("mario", "yoshi") == true);
  CHECK(nw.follow("luigi", "mario") == true);
  CHECK(nw.follow("luigi", "yoshi") == true);
  CHECK(nw.follow("yoshi", "mario") == true);
  CHECK(nw.follow("yoshi", "luigi") == true);
  nw.follow("mario", "luigi");
  nw.follow("mario", "yoshi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");
  nw.follow("yoshi", "luigi");

  // add a user who does not follow others
  nw.addUser("wario", "Wario");
  }

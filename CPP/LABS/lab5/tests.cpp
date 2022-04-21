#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Testing A") {
	CHECK(isDivisibleBy(10,2) == true);
	CHECK(isDivisibleBy(11,2) == false);
	CHECK(isDivisibleBy(21,8) == false);
	CHECK(isDivisibleBy(21,7) == true);
}

TEST_CASE("Testing B") {
	CHECK(isPrime(11231) == true);
	CHECK(isPrime(1122) == false);
	CHECK(isPrime(2) == true);
	CHECK(isPrime(5) == true);
}

TEST_CASE("Testing C") {
	CHECK(nextPrime(17) == 19);
	CHECK(nextPrime(10) == 11);
	CHECK(nextPrime(19) != 20);
	CHECK(nextPrime(40) == 41);
}

TEST_CASE("Testing D") {
	CHECK(countPrimes(10,20) == 4);
	CHECK(countPrimes(30,40) == 2);
	CHECK(countPrimes(40,56) == 4);
	CHECK(countPrimes(5,12) == 3);
}

TEST_CASE("Testing E") {
	CHECK(isTwinPrime(11) == true);
	CHECK(isTwinPrime(19) == false);
	CHECK(isTwinPrime(29) == true);
	CHECK(isTwinPrime(16) == false);
}

TEST_CASE("Testing F") {
	CHECK(nextTwinPrime(19) == 29);
	CHECK(nextTwinPrime(11) == 17);
	CHECK(nextTwinPrime(14) == 17);
	CHECK(nextTwinPrime(24) == 29);
}

TEST_CASE("Testing E") {
	CHECK(largestTwinPrime(10,29) == 29);
	CHECK(largestTwinPrime(7,20) == 17);
	CHECK(largestTwinPrime(20,58) == 41);
	CHECK(largestTwinPrime(1,100) == 71);
}


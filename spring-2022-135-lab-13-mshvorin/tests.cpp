#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("Task A"){
	string a = printRange(1,10);
	string b = printRange(1,5);
	string c = printRange(5,10);
	string d = printRange(3,8);
	CHECK(a == "123456789");
	CHECK(b == "1234");
	CHECK(c == "56789");
	CHECK(d == "34567");
}

TEST_CASE("Task B"){
	    CHECK(sumRange(1,10) == 55);
	    CHECK(sumRange(1,9) == 45);
	    CHECK(sumRange(1,8) == 36);
	    CHECK(sumRange(1,7) == 28);
	    CHECK(sumRange(1,6) == 21);
}

TEST_CASE("Task C"){
	int size1 = 10;
	int *arr1 = new int[size1]; // allocate array dynamically
	    arr1[0] = 12;
	    arr1[1] = 17;
	    arr1[2] = -5;
	    arr1[3] = 3;
	    arr1[4] = 7;
	    arr1[5] = -15;
	    arr1[6] = 27;
	    arr1[7] = 5;
	    arr1[8] = 13;
	    arr1[9] = -21;
	    CHECK(sumArray(arr1, size1) == 124);
}

TEST_CASE("Task D"){
	 CHECK(isAlphanumeric("Cand1y") == 1);
	 CHECK(isAlphanumeric("Candy") == 1);
	 CHECK(isAlphanumeric("Ca nd1y") == 0);
	 CHECK(isAlphanumeric("Cand-1y") == 0);
	 CHECK(isAlphanumeric("CAN1231DY1") == 1);
}

TEST_CASE("Task E"){
	 CHECK(nestedParens("(())") == 1);
	 CHECK(nestedParens("((()))") == 1);
	 CHECK(nestedParens("(()).") == 0);
	 CHECK(nestedParens("((())") == 0);
	CHECK(nestedParens("(((())))") == 1);
}

TEST_CASE("Task F"){
	int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
	 CHECK(divisible(prices, 9) == 1);
}	

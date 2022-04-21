#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A"){
	CHECK(makeVector(10).at(2) == 2);
	CHECK(makeVector(29).at(22) == 22);
	CHECK(makeVector(3).at(2) == 2);
	CHECK(makeVector(44).at(30) == 30);
	CHECK(makeVector(56).at(23) == 23);
}

TEST_CASE("Task B"){
	vector<int> h{1,-2,3,-4,5,-6};
	vector<int> g{1,-2,3,-4,5,-6};
	vector<int> j{1,-2,3,-4,5,-6};
	vector<int> k{1,-2,3,-4,5,-6};
	vector<int> l{1,-2,3,-4,5,-6};
	CHECK(goodVibes(h).at(1) == 2);
	CHECK(goodVibes(g).at(2) == 3);
	CHECK(goodVibes(j).at(3) == 4);
	CHECK(goodVibes(k).at(4) == 5);
	CHECK(goodVibes(k).at(5) == 6);
}

TEST_CASE("Task C"){
	vector<int> check{1,-2,3,-4,5,-6};
	vector<int> check2{1,-2,3,-4};
	vector<int> h{1,-2,3};
	vector<int> g{-4,5,-6};
	vector<int> j{1,-2};
	vector<int> k{3,-4};
	vector<int> l{5,-6};
	gogeta(h, g);
	CHECK(h == check);
	gogeta(j, k);
	CHECK(j == check2);
	gogeta(j, l);
	CHECK(j == check);
}

TEST_CASE("Task D"){
	vector<int> h{1,-2,3};
	vector<int> g{-4,5,-6};
	vector<int> j{1,-2};
	vector<int> k{3,-4};
	vector<int> l{5,-6};
	CHECK(sumPairWise(h, g).at(2) == -3);
	CHECK(sumPairWise(h, g).at(1) == 3);
	CHECK(sumPairWise(h, g).at(0) == -3);
	CHECK(sumPairWise(g, l).at(1) == -1);
	CHECK(sumPairWise(l, g).at(2) == -6);
	
}

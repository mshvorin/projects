#include <iostream>
#include <vector>
#include <cmath> 
#include "funcs.cpp"
using namespace std;
int main() {
cout << makeVector(10).at(1) << endl;
vector<int> h{1,-2,3,-4,5,-6};
cout << goodVibes(h).at(1) << endl;
vector<int> v3{1,2,3};
vector<int> v4{4,5};
gogeta(v3, v4);
cout << v3.at(4) << endl;
vector<int> v1{1,2,3};
vector<int> v2{4,5};
cout << sumPairWise(v1, v2).at(2) << endl;
}

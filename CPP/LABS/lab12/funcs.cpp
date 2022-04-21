#include <iostream>
#include <vector>
#include <cmath> 
#include "funcs.h"
using namespace std;
vector<int> makeVector(int n) {
vector<int> v;
for (int i=0;i<n;i++) {
v.push_back(i);
}
return v;
}

vector<int> goodVibes(const vector<int> v) {
vector<int> newv;
for (int i=0;i < v.size();i++) {
	newv.push_back(abs(v.at(i)));
	}
return newv;
}

void gogeta(vector<int> &goku, vector<int> &vegeta) {
	goku.insert(goku.end(), vegeta.begin(), vegeta.end());
	vegeta.clear();
	cout << goku.at(3) << endl;
}

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) {
	vector<int> newvect;
	if ( v1.size() > v2.size()) {
		for (int i=0;i<v2.size();i++) {
			newvect.push_back(v1.at(i) + v2.at(i));
			}
		for (int i = v2.size();i < v1.size();i++) {
		newvect.push_back(v1.at(i));
		}
		return newvect;
		}
	else if ( v1.size() < v2.size()) {
		for (int i=0;i<v1.size();i++) {
			newvect.push_back(v2.at(i) + v1.at(i));
			}
		for (int i = v1.size();i < v2.size();i++) {
		newvect.push_back(v2.at(i));
		}
			return newvect;
	}
	if ( v1.size() == v2.size()) {
		for (int i=0;i<v1.size();i++) {
			newvect.push_back(v2.at(i) + v1.at(i));
			}
			return newvect;
	}
	return newvect;
}

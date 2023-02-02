#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b) {	
	for (int i = 0; i < b.size(); i++) {
			a.push_back(b.at(i));
		}
		sort(a.begin(), a.end());
		return a;
}

/*int main() {
vector<int> one = {1,2,3};
vector<int> two = {2,3,4};
vector<int> three = merge_sorted(one,two);
	for (int f = 0; f < three.size() ; f++) {
		cout << three.at(f) << " ";	
	}
	cout << endl;
}
*/

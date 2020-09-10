#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& v)
{
	vector<int> w;
	for (int i = v.size() - 1; i >= 0; i--) {
		w.push_back(v[i]);
	}
	v.clear();
	for (auto i : w) {
		v.push_back(i);
	}
}

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v)
{
	vector<int> w;
	for (int i = v.size() - 1; i >= 0; i--) {
		w.push_back(v[i]);
	}
	return w;
}

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++) {
		if (i < v.size() - 1)
			cout << v[i] << ' ';
		else
			cout << v[i] << endl;
	}
}

vector<int> Average(vector<int> v)
{
	int res = 0;
	int len = v.size();
	for (auto s : v) {
		res += s;
	}

	res /= len;

	vector<int> index;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > res) {
			index.push_back(i);
		}
	}

	return index;
}

int main()
{
	int n;
	cin >> n;

	vector<int> temperature(n);

	for (auto& t : temperature) {
		cin >> t;
	}

	cout << Average(temperature).size() << endl;
	PrintVector(Average(temperature));

	return 0;
}

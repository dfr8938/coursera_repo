#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

	int x, n, next, cost;
	cin >> x;

	vector<int> numbs;
	while (x != 1) {
		numbs.push_back(x);
		n = x / 2;
		x = n;
	}

	vector<int> bins;
	for (auto numb : numbs) {
		if (numb % 2 == 0)
			bins.push_back(numb % numb);
		else
			bins.push_back(numb % (numb - 1));
	}

	bins.push_back(1);

	for (int i = bins.size() - 1; i >= 0; i--) {
		cout << bins[i];
	}

	cout << endl;

	return 0;
}

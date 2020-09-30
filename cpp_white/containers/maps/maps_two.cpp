#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void PrintMap(map<string, int>& m)
{
	for (const auto& item : m) {
		cout << item.first << " : " << item.second << endl;
	}
}

int main()
{
	map<string, int> m = {

		{"one", 1},
		{"two", 2},
		{"three", 3}

	};

	PrintMap(m);
	m.erase("three");

	cout << endl;

	PrintMap(m);

	cout << endl;

	vector<string> words = {"one", "two", "three", "one", "one", "two"};

	map<string, int> counters;
	for (const auto& word : words) {
		++counters[word];
	}

	PrintMap(counters);
	return 0;
}

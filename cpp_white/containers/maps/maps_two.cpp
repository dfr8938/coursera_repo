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

	cout << endl;

	vector<string> w = {"one", "two", "three"};
	map<char, vector<string>> grouped_words;
	for (const auto& item : w) {
		grouped_words[item[0]].push_back(item);
	}
	for (const auto& i : grouped_words) {
		cout << i.first << endl;
		for (const auto& s : i.second) {
			cout << s << " ";
		}
		cout << endl;
	}
	return 0;
}

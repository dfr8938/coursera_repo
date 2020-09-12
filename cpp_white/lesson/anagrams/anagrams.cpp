#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<char, int> BuildCharCounters(string& s, char c)
{
	map<char, int> m;

	int j = 0;
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
		c = tolower(c);
		if (s[i] == c) {
			j++;
		}
	}

	m[c] = j;

	return m;
}

string FirstItemMapToString(string s)
{
	map<char, int> end;

	for (int i = 0; i < s.size(); i++) {
		map<char, int> start = BuildCharCounters(s, s[i]);
		for (auto item : start) {
			end[item.first] = item.second;
		}
		start.clear();
	}

	string output;
	for (auto item : end) {
		output += item.first;
	}

	return output;
}


string SecondItemMapToString(string s)
{
	map<char, int> end;

	for (int i = 0; i < s.size(); i++) {
		map<char, int> start = BuildCharCounters(s, s[i]);
		for (auto item : start) {
			end[item.first] = item.second;
		}
		start.clear();
	}

	string output;
	for (auto item : end) {
		item.second += '0';
		output += item.second;
	}

	return output;
}

void PrintMap(const map<char, int>& m)
{
	for (auto item : m) {
		cout << item.first << "->" << item.second << endl;
	}
}

map<string, string> CreateMap(int n)
{
	string f, s;
	map<string, string> m;

	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		m[f] = s;
	}

	return m;
}

int main()
{
	int n;
	cin >> n;

	map<string, string> m = CreateMap(n);

	for (auto item : m) {
		if (FirstItemMapToString(item.first) == FirstItemMapToString(item.second) &&
			SecondItemMapToString(item.first) == SecondItemMapToString(item.second)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}

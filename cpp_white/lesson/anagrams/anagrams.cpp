#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<char, int> BuildCharCounters(const string& s, char& c)
{
	map<char, int> m;

	int j = 0;
	for (auto i : s) {
		i = tolower(i);
		c = tolower(c);
		if (i == c) {
			j++;
		}
	}

	m[c] = j;

	return m;
}

string FirstItemMapToString(const string& s)
{
	map<char, int> start;
	map<char, int> end;
	
	for (auto el : s) {
		start = BuildCharCounters(s, el);
		for (auto item : start) {
			end[item.first] = item.second;
		}
		start.clear();
	}

	string output = "";
	for (auto item : end) {
		output += item.first;
	}
	
	start.clear();
	end.clear();
	return output;
}


string SecondItemMapToString(const string& s)
{
	map<char, int> start;
	map<char, int> end;

	for (auto el : s) {
		start = BuildCharCounters(s, el);
		for (auto item : start) {
			end[item.first] = item.second;
		}
		start.clear();
	}

	string output = "";
	for (auto item : end) {
		item.second += '0';
		output += item.second;
	}

	start.clear();
	end.clear();
	return output;
}

void PrintMap(const map<char, int>& m)
{
	for (auto item : m) {
		cout << item.first << "->" << item.second << endl;
	}
}

void PrintVector(const vector<string>& v)
{
	for (auto item : v) {
		cout << item << endl;
	}
}

vector<string> VectorAnswers(int n)
{
	string f, s;
	map<string, string> m;
	vector<string> answers;
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		m[f] = s;
		for (auto item : m) {
			if (FirstItemMapToString(item.first) == FirstItemMapToString(item.second) &&
				SecondItemMapToString(item.first) == SecondItemMapToString(item.second)) {
				answers.push_back("YES");
			} else {
				answers.push_back("NO");
			}
		}
		m.clear();
	}
	
	m.clear();
	return answers;
}

int main()
{
	int n;
	cin >> n;

	vector<string> answers = VectorAnswers(n);

	PrintVector(answers);

	return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void Sort(vector<char>& c)
{
	sort(begin(c), end(c));
}

void PrintMap(const map<string, string>& m)
{
	for (auto item : m) {
		cout << item.first << " " << item.second << endl;
	}
}

void PrintVector(const vector<char>& c)
{
	for (auto item : c) {
		cout << item << " ";
	}
}

void PrintVector(const vector<string>& c)
{
	for (auto item : c) {
		cout << item << endl;
	}
}

bool Equality(const vector<char>& f, const vector<char>& s)
{
	if (f.size() != s.size())
		return false;
	else {
		for (int i = 0; i < f.size(); i++) {
			if (f[i] == s[i]) {
				i++;
			} else {
				return false;
			}
		}
	}
	return true;
}

vector<char> VectorCharSort(const string& s)
{
	vector<char> c;
	for (int i = 0; i < s.size(); i++) {
		c.push_back(tolower(s[i]));
	}
	Sort(c);

	return c;
}

vector<string> CreateMap(int n)
{
	string f, s;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		if (Equality(VectorCharSort(f), VectorCharSort(s)) == 1)
			v.push_back("YES");
		else
			v.push_back("NO");
	}
	return v;
}

int main()
{
	int n;
	cin >> n;
	vector<string> v = CreateMap(n);
	PrintVector(v);

	return 0;
}

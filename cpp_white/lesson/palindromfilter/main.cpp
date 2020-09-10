#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrom(string s) {

	if (s.size() <= 1) {
		return true;
	}

	int length = s.size() / 2;

	string start;

	for (int i = 0; i < length; i++) {
		start += tolower(s[i]);
	}

	string end;

	if (s.size() % 2 != 0) {
		for (int i = s.size() - 1; i >= length + 1; i--)
		{
			end += tolower(s[i]);
		}
	} else {
		for (int i = s.size() - 1; i >= length; i--) {
			end += tolower(s[i]);
		}
	}

	if (start == end) {
		return true;
	}

	return false;
}


vector<string> PalindromFilter(vector<string> words, int minLength)
{
	vector<string> str;
	for (auto w : words) {
		if (IsPalindrom(w) == true && w.size() >= minLength)
		{
			str.push_back(w);
		}
	}

	return str;
}

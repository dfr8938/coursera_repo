#include <algorithm>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintVector(const vector<int>& v)
{
	int i = 0;
	for (auto s : v) {
		if (i == 0)
			cout << "{" << s << ", ";
		else if (i < v.size() - 1)
			cout << s << ", ";
		else
			cout << s << "}" << endl;
		i++;
	}
}

void PrintVector(const vector<bool>& v)
{
	int i = 0;
	for (auto s : v) {
		if (i == 0)
			cout << "{" << s << ", ";
		else if (i < v.size() - 1)
			cout << s << ", ";
		else
			cout << s << "}" << endl;
		i++;
	}
}


string ReverseString(string s)
{
	string new_s;
	for (int i = s.size(); i >= 0; i--) {
		new_s += s[i];
	}
	
	return new_s;
}

string YearNow()
{
	time_t now = time(0);
	string s = ctime(&now);
	string r_year;
	string n_year;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == ' ')
			break;
		else
			r_year += s[i];
	}
	n_year = ReverseString(r_year);
	return n_year;
}

int main()
{
	vector<int> days_in_months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (true) { // if year is leap
		days_in_months[1]++;
	}

	PrintVector(days_in_months);

	vector<bool> is_holiday(days_in_months[1], false);

	is_holiday[0] = true;
	is_holiday[1] = true;
	is_holiday[2] = true;
	is_holiday[3] = true;

	PrintVector(is_holiday);

	is_holiday.resize(31);

	PrintVector(is_holiday);

	is_holiday.assign(31, false);

	is_holiday[7] = true;

	PrintVector(is_holiday);
	
	return 0;
}

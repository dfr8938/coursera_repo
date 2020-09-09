#include <iostream>
#include <string>

using namespace std;

int max_number(int x, int y) {
	if (x < y)
		return y;
	else
		return x;
}

string is_equal(int x, int y) {
	if (x == y)
		return "equal";
	else
		return "not equal";
}

string is_less(string x, string y) {
	if (x < y)
		return "less";
	else
		return "not less";
}

string is_equal(string x, string y) {
	if (x == y)
		return "equal";
	else
		return "not equal";
}

int main() {
	int x = 4;
	int y = 5;

	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x * y << endl;
	cout << "x / y = " << x / y << endl;
	cout << "x % y = " << x % y << endl;
	
	cout << "max number: " << max_number(x, y) << endl;
	cout << "are the numbers equal: " << is_equal(x, y) << endl;
	
	string str1 = "abc";
	string str2 = "bca";
	string str3 = "abc";

	cout << "are the strings equal: " << is_equal(str1, str2) << endl;
	cout << "are the strings equal: " << is_equal(str1, str3) << endl;
	
	string a = "abc";
	string b = "aaabc";

	cout << "a < b: " << is_less(a, b) << endl;

	return 0;
}

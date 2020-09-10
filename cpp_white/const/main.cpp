#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const int x = 5;

//	x = 6;
//	x += 4;

	cout << x << endl;

	const string s = "Hello, ";

	cout << s.size() << endl;

//	s += "World!";

	cout << s.size() << endl;

	const vector<string> strings = {"hello", "world"};
	
//	strings.push_back("!");

//	strings[0][0] = 'H';

	cout << strings.size() << endl;

	return 0;
}

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

	return 0;
}

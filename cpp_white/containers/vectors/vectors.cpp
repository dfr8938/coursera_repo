#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintVector(const vector<string>& v)
{
	int i = 0;
	for (auto s : v) {
		if (i == 0)
			cout << "{'" << s << "', ";
		else if (i < v.size() - 1)
			cout << "'" << s << "', ";
		else
			cout << "'" << s << "'}" << endl;
		i++;
	}
}

int main()
{
	int n;
	cin >> n;

	vector<string> v(n);

	for (string& s : v) {
		cin >> s;
	}

	PrintVector(v);
	cout << "Current size: " << v.size() << endl;

	return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string min_str(string s1, string s2, string s3) {

	vector<string> strings = {s1, s2, s3};
	sort(begin(strings), end(strings));
	return strings[0];
}

int main() {

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cout << min_str(s1, s2, s3) << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool contains(vector<string> words, string w) {
	for (auto word : words) {
		if (word == w)
			return true;
	}
	return false;
}

int add(int x, int y) {
	return x + y;
}

int main() {

	int x, y;

	cin >> x >> y;
	cout << add(x, y) << endl;

	vector<string> words = {"hello", "world", "coder"};
	
	if (contains(words, "hello") == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	cout << "Hi, what is your name?" << endl;
	string name;

	cin >> name;

	cout << "Hello, " << name << endl;

	cout << "Enter numbers please: ";

	int x, y;
	cin >> x >> y;

	string str = "hello";

	cout << x << " " << str << endl;
	cout << x + y << endl;

	vector<int> nums = {1, 3, 5, 7, 9};

	return 0;
}

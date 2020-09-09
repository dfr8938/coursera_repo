#include <iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i != 0 && i % 2 == 0) {
			if (i != b && b % 2 == 0) {
				cout << i << " ";
			} else {
				cout << i << endl;
			}
		}

	}

	return 0;
}

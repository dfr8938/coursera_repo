#include <iostream>

using namespace std;

int main() {

	float n, a, b, x, y;
	
	cin >> n >> a >> b >> x >> y;

	float discont;
	float output;
	if (n > b) {
		discont = n * (y / 100);
		output = n - discont;
	} else if (n > a) {
		discont = n * (x / 100);
		output = n - discont;
	} else {
		output = n;
	}

	cout << output << endl;

	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double a, b, c;
	cin >> a >> b >> c;

	double di;
	double x1, x2;
	di = b * b - 4 * a * c;

	if (a == 0 && b == 0) {
		cout << endl;
	}

	if (a != 0) {
		if (di > 0) {
			x1 = ((-b) + sqrt(di)) / (2 * a);
			x2 = ((-b) - sqrt(di)) / (2 * a);
			cout << x1 << " " << x2 << endl;
		} else if (di == 0) {
			x1 = (-b) / (2 * a);
			cout << x1 << endl;
		} else if(di < 0){
			cout << endl;
		}
	} else if (a == 0 && b != 0) {
		x1 = (-c) / b;
		cout << x1 << endl;
	}

	return 0;
}

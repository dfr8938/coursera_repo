#include <iostream>

using namespace std;

int Factorial(int numb) {

	if (numb > 0) {
		return numb * Factorial(numb - 1);
	}

	return 1;
}

int main() {

	int numb;
	cin >> numb;
	cout << Factorial(numb) << endl;
	return 0;
}

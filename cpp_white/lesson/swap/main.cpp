#include <iostream>
#include <string>
#include <vector>

using namespace std;

void	Swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int x, y;

	x = 4;
	y = 5;

	cout << x << " " << y << endl;

	Swap(x, y);

	cout << x << " " << y << endl;

	return 0;
}

#include <algorithm>
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

void Sort(vector<int>& n)
{
	sort(begin(n), end(n));
}

int main()
{
	int x, y;

	x = 4;
	y = 5;

	cout << x << " " << y << endl;

	Swap(x, y);

	cout << x << " " << y << endl;

	vector<int> numbers = {1, 3, 25, 7, 9, 11, 0, 15};
	
	Sort(numbers);

	int i = 0;
	for(auto number : numbers)
	{
		if (i != numbers.size() - 1) {
			cout << number << " ";
		} else {
			cout << number << endl;
		}

		i++;
	}

	return 0;
}

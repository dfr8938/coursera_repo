#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main() {

	string str = "abcdefghkl";

	cout << "length str: " << str.size() << " elements str: ";

	int i = 0; 
	for(char s : str) {
		if (i != str.size() - 1)
			cout << s << ", ";
		else
			cout << s << ".";
		i++;
	}


	cout << endl;
	
	vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	cout << "length numbers: " << numbers.size() << " elements numbers: ";
	
	i = 0;
	for (int number : numbers) {
		if (i != numbers.size() - 1)
			cout << number << ", ";
		else
			cout << number << ".";
		i++;
	}

	cout << endl;
	
	vector<string> str2 = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

	cout << "length str2: " << str2.size() << " elements str2: ";

	i = 0;
	for (auto s : str2) {
		if (i < str2.size() - 1)
			cout << s << ", ";
		else
			cout << s << ".";
		i++;
	}

	cout << endl;

	vector<int> nums = {55, 1, 3, 55, 100, 110, 3};
	i = count(begin(nums), end(nums), 55);
	cout << "55: " << i << endl;

	sort(begin(nums), end(nums));
	i = 0;
	for (auto num : nums) {
		if (i != nums.size() - 1)
			cout << num << ", ";
		else
			cout << num << ".";
		i++;
	}

	cout << endl;

	return 0;
}

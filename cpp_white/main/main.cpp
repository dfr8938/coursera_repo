#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int len(vector<int> nums) {
	int i = 0;
	while (nums[i]) {
		i++;
	}
	return i;
}

struct Person {
	string name;
	string surname;
	int age;
};

int main()
{
	int x = 5;
	double pi = 3.14;
	bool value = true;
	char z = 'Z';
	string hw = "Hello, World!";
	vector<int> nums = {1, 3, 5, 7, 9};
	
	cout << "x = " << x << endl;
	cout << "pi = " << pi << endl;
	cout << "value = " << value << endl;
	cout << "z = " << z << endl;
	cout << "hw = " << hw << endl;

	for (int i = 0; i < len(nums); i++) {
		cout << "nums[" << i << "] = " << nums[i] << endl;
	}
	
	map<string, int> name_to_value;

	name_to_value["one"] = 1;
	name_to_value["two"] = 2;
	name_to_value["three"] = 3;

	cout << "two is " << name_to_value["two"] << endl;
	
	vector<Person> staff;

	staff.push_back({"Ivan", "Ivanov", 25});
	staff.push_back({"Petr", "Petrov", 20});
	
	cout << staff[0].name << " " << staff[0].surname << " " << staff[0].age << endl;
	cout << staff[1].name << " " << staff[1].surname << " " << staff[1].age << endl;

	return 0;
}

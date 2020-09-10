#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::chrono;

struct Person
{
	string name;
	string surname;
	int age;
};

vector<Person> GetMoscowPopulation()
{
	vector<Person> people;
	people.push_back({"Ivanov", "Ivan", 35});
	return people;
}

void PrintPopulationSize(const vector<Person>& p)
{
	cout << "There are " << p.size() <<
	" people in Moscow" << endl;
}

int main()
{
	auto start = steady_clock::now();
	vector<Person> people = GetMoscowPopulation();
	auto finish = steady_clock::now();

	cout << "GetMoscowPopulation() " << duration_cast<milliseconds>(finish - start).count() << " ms" << endl;

	start = steady_clock::now();
	PrintPopulationSize(people);
	finish = steady_clock::now();

	cout << "PrintPopulation() " << duration_cast<milliseconds>(finish - start).count() << " ms" << endl;
	
	return 0;
}

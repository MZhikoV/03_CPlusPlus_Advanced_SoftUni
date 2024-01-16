#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map <string, int> cityPopulations = {
		pair<string,int> {"Gabrovo", 12345},
		pair<string,int> {"Sofia", 1987654},
		pair<string,int> {"Melnik", 345}
	};

	cityPopulations["Sofia"]++;
	cityPopulations["Veliko Tarnovo"] = 456789;
	cityPopulations.insert(pair<string, int>{"Pliska", 0});

	map<string, int>::iterator it1;

	for (it1 = cityPopulations.begin(); it1 != cityPopulations.end(); it1++) {
		cout << it1->first << ' ' << it1->second << endl;
	}

	cout << endl;
	cout << "=======================================================";
	cout << endl;

	auto it2 = cityPopulations.begin();

	for (; it2 != cityPopulations.end(); it2++) {
		cout << it2->first << ' ' << it2->second << endl;
	}

	cout << endl;
	cout << "=======================================================";
	cout << endl;

	cityPopulations.erase("Pliska");



	for (pair<string, int> element : cityPopulations) {
		cout << element.first << ' ' << element.second << endl;
	}

	cout << endl;
	cout << "=======================================================";
	cout << endl;


	cout << "Enter a city name to see its population:" << endl;
	string searchCity;
	getline(cin, searchCity);

	map<string, int>::iterator found = cityPopulations.find(searchCity);

	if (found != cityPopulations.end()) {
		cout << found->first << ' ' << found->second << endl;
	}
	else {
		cout << "There is no data for such city :" << searchCity << endl;
	}

}
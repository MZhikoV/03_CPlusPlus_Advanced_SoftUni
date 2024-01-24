#include <iostream>
#include <string>
#include <sstream>
#include <functional>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> numbers;

	string input;
	getline(cin, input);

	istringstream inp(input);

	double number;
	while (inp >> number) {
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end(), greater<double>());

	int counter = 0;
	for (double num : numbers) {
		if (counter == 3) {
			break;
		}
		cout << num << ' ';
		counter++;
	}
	cout << endl;
	return 0;
}


//Using set for non-repeatable numbers
/*
#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	set<int, greater<int>> numbers;

	string input;
	getline(cin, input);

	istringstream inp(input);

	int number;
	while (inp >> number) {
		numbers.insert(number);
	}
	int counter = 0;
	for (int num : numbers) {
		if (counter == 3) {
			break;
		}
		cout << num << ' ';
		counter++;
	}
	cout << endl;
	return 0;
}
*/
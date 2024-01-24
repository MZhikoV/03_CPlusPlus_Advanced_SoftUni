#include <iostream>
#include <string>
#include <sstream>
#include <functional>
#include <cctype>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	set<double, greater<double>> numbers;
	// greater<double> reverses the sorting order

	string input;
	getline(cin, input);

	istringstream inp(input);

	double number;
	while (inp >> number) {
		numbers.insert(number);
	}

	int count = 3;

	for (double element : numbers) {
		cout << element << " ";
		count--;
		if (count == 0) {
			break;
		}
	}
	return 0;
}
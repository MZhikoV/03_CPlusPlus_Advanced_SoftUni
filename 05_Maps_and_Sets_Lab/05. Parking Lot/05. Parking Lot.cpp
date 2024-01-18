#include <iostream>
#include <set>
#include<algorithm>
#include <string>

using namespace std;

int main()
{
	set<string>carPlates;

	string input;
	cin >> input;

	while (input != "END") {

		string plateNum;
		cin >> plateNum;

		if (input == "IN,") {
			carPlates.insert(plateNum);
		}
		else {
			carPlates.erase(plateNum);
		}
		cin >> input;
	}
	if (carPlates.empty()) {
		cout << "Parking Lot is Empty" << endl;
	}
	else {
		for (string plate : carPlates) {
			cout << plate << endl;
		}
	}
	return 0;
}
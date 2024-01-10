#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;


int main()
{
	string input;
	getline(cin, input);

	istringstream inp(input);

	queue<int> numbers;

	int num;

	while (inp >> num) {
		if (num % 2 == 0) {
			numbers.push(num);
		}
	}

	while (!numbers.empty()) {
		cout << numbers.front();	
		numbers.pop();

		if (numbers.empty()) {
			break;
		}
		cout << ", ";
	}
	cout << endl;
	return 0;
}
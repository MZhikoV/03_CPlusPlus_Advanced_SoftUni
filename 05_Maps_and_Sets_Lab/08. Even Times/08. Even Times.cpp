#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	map<int, int> numbers;

	int n;
	cin >> n;

	while (n--) {
		int nums;
		cin >> nums;
		numbers[nums]++;
	}

	for (pair<int, int> num : numbers) {
		if (num.second % 2 == 0) {
			cout << num.first << endl;
			break;
		}
	}
	return 0;
}
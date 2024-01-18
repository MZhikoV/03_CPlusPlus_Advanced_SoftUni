#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	set<string>usernames;

	int num;
	cin >> num;

	while (num--) {
		string uName;
		cin >> uName;

		usernames.insert(uName);
	}
	for (string coll : usernames) {
		cout << coll << endl;
	}
	return 0;
}
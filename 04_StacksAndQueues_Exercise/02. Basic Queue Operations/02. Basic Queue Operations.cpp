#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <queue>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	istringstream inpN(input);
	int n, s, x;
	inpN >> n >> s >> x;

	queue<int>inp;

	bool found = false;

	getline(cin, input);
	istringstream numSeq(input);

	int num;
	while (numSeq >> num) {
		inp.push(num);
	}

	int min = INT_MAX;

	if (s >= n) {
		cout << '0' << endl;
		return 0;
	}
	else {
		for (int i = 0; i < s; i++) {
			inp.pop();
		}


		while (!inp.empty()) {
			if (inp.front() == x) {
				found = true;
				break;
			}
			else {
				if (min > inp.front()) {
					min = inp.front();
				}
			}
			inp.pop();
		}
	}

	if (found) {
		cout << "true" << endl;
	}
	else {
		cout << min << endl;
	}

	return 0;
}
#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	stack<int>numSeq;
	string input;

	getline(cin, input);

	while (input != "end") {

		istringstream istr(input);

		string comm;

		istr >> comm;
			
		if (comm == "add") {
			int num;
			while (istr >> num) {
				numSeq.push(num);
			}
		}
		else if (comm == "remove") {
			int num;
			istr >> num;
			if (num < numSeq.size()) {
				for (int i = 0; i < num; i++) {
					numSeq.pop();
				}
			}
		}
		else {
			numSeq.push(stoi(comm));
			int num;
			while (istr >> num) {
				numSeq.push(num);
			}
		}
		getline(cin, input);
	}

	int sum = 0;
	while (!numSeq.empty()) {
		sum += numSeq.top();
		numSeq.pop();
	}

	cout << sum << endl;

	return 0;
}
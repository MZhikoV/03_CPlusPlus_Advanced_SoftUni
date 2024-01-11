#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <queue>

using namespace std;

int maxmin(string s, stack<int> inp) {
    if (s == "min") {
        int min = INT_MAX;
        while (!inp.empty()) {
            if (inp.top() < min) {
                min = inp.top();
            }
            inp.pop();
        }
        return min;
    }
    else {
        int max = INT_MIN;
        while (!inp.empty()) {
            if (inp.top() > max) {
                max = inp.top();
            }
            inp.pop();
        }
        return max;
    }
}

int main()
{
    int n;
    cin >> n;

    stack<int> result;

    while (true) {
        int comm;
        cin >> comm;

		switch (comm) {
		case 1: cin >> comm; result.push(comm); break;
        case 2: if (!result.empty()) {
                    result.pop();
                }
                break;
		case 3: if (!result.empty()) {
			        cout << maxmin("max", result) << endl;
		        }
			    break;
		case 4: if (!result.empty()) {
			        cout << maxmin("min", result) << endl;
		        }
			    break;
        default: break;
		}

        n--;

        if (n == 0) {
            break;
        }
    }
    while (!result.empty()) {
        cout << result.top();
        result.pop();
        if (result.empty()) {
            break;
        }
        cout << ", ";
    }

    cout << endl;
    
    return 0;
}
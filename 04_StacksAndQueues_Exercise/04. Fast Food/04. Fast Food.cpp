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

    istringstream inp1(input);
    int food;
    inp1 >> food;

    getline(cin, input);

    istringstream inp(input);

    queue<int>orders;

    int max = INT_MIN;

    int order;
    while (inp >> order) {
        orders.push(order);
        if (order > max) {
            max = order;
        }
    }

    cout << max << endl;
    bool notenough = false;

    while (!orders.empty()) {
        food -= orders.front();
        if (food < 0 && !notenough) {
            cout << "Orders left: ";
            notenough = true;
        }
        if (notenough) {
            cout << orders.front() << ' ';
        }
        orders.pop();
    }
    if (food >= 0) {
        cout << "Orders complete" << endl;
    }
return 0;
}
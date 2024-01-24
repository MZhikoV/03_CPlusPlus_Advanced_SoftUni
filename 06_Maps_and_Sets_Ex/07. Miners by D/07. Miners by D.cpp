#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
    map<string, int> data;
    queue<string>order;

    string input;

    while (cin >> input) {
        if (input == "stop") {
            break;
        }

        int quantity;
        cin >> quantity;

        auto it = data.insert({ input,quantity });

        if (it.second) {
            order.push(input);
        }
        else {
            it.first->second += quantity;
        }
    }

    while (order.size()) {
        string res=order.front();
        order.pop();
        cout << res << " -> "<<data[res]<< endl;
    }
    return 0;
}
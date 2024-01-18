#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    map<string, int> data;
    vector<string>order;

    string input;
    cin >> input;

    while (true) {
        if (input == "stop") {
            break;
        }

        int quantity;
        cin >> quantity;

        map<string, int>::iterator it = data.find(input);

        if (it == data.end()) {
            order.push_back(input);
            data[input]= quantity;
        }
        else {
            it->second+= quantity;
        }
        cin >> input;
    }

    auto it2 = order.begin();

    for (; it2 != order.end(); it2++) {
        //string element = *it2;
        cout << *it2 << " -> ";
        auto it3 =data.find(*it2);
        if (it3 != data.end()) {
            cout << it3->second << endl;
        }
    }
    return 0;
}
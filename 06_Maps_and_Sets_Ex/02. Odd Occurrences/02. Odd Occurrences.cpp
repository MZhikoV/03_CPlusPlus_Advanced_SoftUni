#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    map<string, int> data;
    array<string>order;

    string input;
    getline(cin, input);

    istringstream inp(input);

    string element;
    while (inp >> element) {
        for (size_t i = 0; i < element.size(); i++) {
            element[i] = tolower(element[i]);
        }

            map<string, int>::iterator it = data.find(element);

            if (it == data.end()) {
                order.push_back(element);
                data[element]++;
            }
            else {
                it->second++;
            }
    }

    auto it2 = order.begin();

    bool isFirst = true;

    for (; it2 != order.end(); it2++) {
        string element = *it2;

        if (data[element] % 2 != 0) {
            
            if (isFirst) {
                isFirst = false;
            }
            else {
                cout << ", ";
            }
            cout << element;
        }
    }
    cout << endl;
    return 0;
}
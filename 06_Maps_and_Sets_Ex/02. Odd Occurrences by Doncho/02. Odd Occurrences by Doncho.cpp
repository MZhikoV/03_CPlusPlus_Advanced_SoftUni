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
    array<string>order;

    string input;
    getline(cin, input);
    //transform string to lower case
    transform(input.cbegin(), input.cend(),
        input.begin(), //write ti the same location
        ::tolower);

    istringstream inp(input);

    string element;
    while (inp >> element) {

        map<string, int>::iterator it = data.find(element);

        if (it == data.end()) {
            order.push_back(element);
            data[element]++;
        }
        else {
            it->second++;
        }
    }

    bool isFirst = true;

    for (const string & element: order) { 
        //printing withou iterators and without copyibg the elements, just simple access with const -- &

        if (data[element] % 2) {

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
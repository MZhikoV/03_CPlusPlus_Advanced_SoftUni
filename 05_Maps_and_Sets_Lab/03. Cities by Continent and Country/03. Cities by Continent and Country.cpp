#include <iostream>
#include <map>
#include<string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, map<string, vector<string>>> data;

    int num;
    cin >> num;

    while (num > 0) {
        string continent, country, city;
        cin >> continent >> country >> city;
        data[continent][country].push_back(city);
        num--;
    }

    auto it1 = data.begin();

    for (; it1 != data.end(); it1++) {
        cout << it1->first  <<": "<< endl;
        auto it2 = it1->second.begin();
        for (; it2 != it1->second.end(); it2++) {
            cout << it2->first << " -> ";
            auto it3 = it2->second.begin();
            sort(it2->second.begin(), it2->second.end());
            for (; it3 != it2->second.end(); it3++) {
                cout << *it3;
                if (it3 != it2->second.end() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
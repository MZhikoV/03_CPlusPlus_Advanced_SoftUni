#include <iostream>
#include <map>
#include<string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    map<string, map<string, set<string>>> data;

    int num;
    cin >> num;

    while (num--) {
        string continent, country, city;
        cin >> continent >> country >> city;
        data[continent][country].insert(city);
    }

    auto it1 = data.begin();

    for (; it1 != data.end(); it1++) {
        cout << it1->first << ": " << endl;

        map<string, set<string>>& continentData = it1->second;

        auto it2 = continentData.begin();
        for (; it2 != it1->second.end(); it2++) {
            cout << it2->first << " -> ";

            set<string>& cities = it2->second;

            bool firstE = true;

            for (string cityName : cities) {
                if (!firstE) {
                    cout << ", ";
                }
                else {
                    firstE = false;
                }
                cout << cityName;
            }
            cout << endl;
        }
    }
    return 0;
}
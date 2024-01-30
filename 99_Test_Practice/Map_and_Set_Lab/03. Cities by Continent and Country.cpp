#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, map<string, set<string>>> continents;

    int num;
    cin >> num;

    while (num--)
    {
        string cont, country, city;
        cin >> cont >> country >> city;

        continents[cont][country].insert(city);
    }

    for (auto it1 = continents.begin(); it1 != continents.end(); it1++)
    {
        cout << it1->first << ':' << endl;

        map<string, set<string>> countries = it1->second;

        for (auto it2 = countries.begin(); it2 != countries.end(); it2++)
        {
            cout <<"  "<< it2->first << " -> ";

            set<string> cities = it2->second;

            bool isFirst = true;
            for (string name : cities)
            {
                if (isFirst)
                {
                    isFirst = false;
                }
                else
                {
                    cout << ", ";
                }
                cout << name;
            }
            cout<<endl;
        }
    }
    return 0;
}

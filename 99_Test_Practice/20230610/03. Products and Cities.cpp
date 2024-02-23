#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    map<string, long double> result;

    string num;
    getline(cin, num);
    string city;

    while (getline(cin, city))
    {
        if (city.empty())
            break;
        istringstream istr(city);
        string ccity;
        istr>>ccity;
        string a, b;
        getline(cin, a);
        getline(cin, b);

        long double price = stod(a);
        long double quan = stod(b);

        long double tot = price * quan;

        auto it = result.find(ccity);

        if (it == result.end())
        {
            result[ccity] = tot;
        }
        else
        {
            it->second += tot;
        }
    }

    for (auto elem : result)
    {
        cout << elem.first << ' ' << elem.second << endl;
    }
    return 0;
}
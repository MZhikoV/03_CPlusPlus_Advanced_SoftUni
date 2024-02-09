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
    map<string, string> placesByName;
    map<pair<string,string>,vector<string>> plcesByCoord;

    vector<string> inpElem;

    string input;
    while (getline(cin, input) && input != ".")
    {
        string inpW;
        for (size_t c = 0; c < input.length(); c++)
        {
            if (input[c] != ',')
            {
                inpW.push_back(input[c]);
            }
            else
            {
                if (inpW.length() > 0)
                {
                    inpElem.push_back(inpW);
                    inpW.clear();
                }
            }
        }
        if (inpW.length() > 0)
        {
            inpElem.push_back(inpW);
            inpW.clear();
        }

        pair<string, string> pairC{inpElem[1], inpElem[2]};
        placesByName[inpElem[0]] = input;
        plcesByCoord[pairC].push_back(input);
        inpElem.clear();
    }

    // for (auto it1 = places.begin(); it1 != places.end(); it1++)
    // {
    //     cout << it1->first << ',' << it1->second.first << ',' << it1->second.second << endl;
    // }

    string queue;

    while (getline(cin, queue) && queue != ".")
    {
        auto it1 = placesByName.find(queue);
        if (it1 != placesByName.end())
        {
            cout << it1->second<< endl;
        }
        else
        {
            istringstream qq(queue);
            string lat,lon;
            qq>>lat>>lon;

            
         for (string namePos:plcesByCoord[make_pair(lat,lon)]) {
            cout<<namePos<<endl;
         }

        }
    }
system("pause");
return 0;
}

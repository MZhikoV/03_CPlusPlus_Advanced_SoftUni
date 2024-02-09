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
    map<string, pair<string, string>> places;

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
        places[inpElem[0]] = pairC;
        inpElem.clear();
    }

    // for (auto it1 = places.begin(); it1 != places.end(); it1++)
    // {
    //     cout << it1->first << ',' << it1->second.first << ',' << it1->second.second << endl;
    // }

    string queue;
    vector<string> coord;
    while (getline(cin, queue) && queue != ".")
    {
        auto it1 = places.find(queue);
        if (it1 != places.end())
        {
            cout << it1->first << ',' << it1->second.first << ',' << it1->second.second << endl;
        }
        else
        {
            string inpC;
            for (size_t c = 0; c < queue.length(); c++)
            {   
                char check=queue[c];
               if (queue[c] != ' ')
                {
                    inpC.push_back(queue[c]);
                }
                else
                {
                    if (inpC.length() > 0)
                    {
                        coord.push_back(inpC);
                        inpC.clear();
                    }
                }
            }
            if (inpC.length() > 0)
            {
                coord.push_back(inpC);
                inpC.clear();
            }
            auto it2 = places.begin();
            for (; it2 != places.end(); it2++)
            {
                if (it2->second.first == coord[0] && it2->second.second == coord[1] )
                {
                    cout << it2->first << ',' << it2->second.first << ',' << it2->second.second << endl;
                }
            }
            coord.clear();
        }
    }



system("pause");
return 0;
}

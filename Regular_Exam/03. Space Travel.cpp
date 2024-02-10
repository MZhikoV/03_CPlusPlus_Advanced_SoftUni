#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    vector<string> solarSystem;

    map<int, vector<string>> travelM;

    vector<vector<int>> dist;

    string names;
    while (cin >> names && names != "END")
    {
        solarSystem.push_back(names);
    }
    int n = solarSystem.size();
    dist.resize(n);

    for (size_t r = 0; r < n; r++)
    {
        dist[r].resize(n);
        for (size_t c = 0; c < n; c++)
        {
            cin >> dist[r][c];
        }
    }

    int temp;
    for (size_t r = 0; r < n; r++)
    {
        for (size_t c = 0; c < n; c++)
        {
            if (r != c)
            {
                temp = dist[r][c];
                travelM[temp].push_back(solarSystem[r] + " -> " + solarSystem[c]);
            }
        }
    }

    auto itS = travelM.begin();
    vector<string> els = itS->second;
    for (string el : els)
    {
        cout << itS->first << ": " << el << endl;
    }

    auto itE = travelM.rbegin();
    vector<string> ele = itE->second;
    for (string el : ele)
    {
        cout << itE->first << ": " << el << endl;
    }
    cin.ignore();
    string input;
    int totSum = 0;
    while (getline(cin, input) && input != "END")
    {
        vector<int> travelIdx;
        istringstream inp(input);
        string planet;
        while (inp >> planet)
        {
            auto it = find(solarSystem.begin(), solarSystem.end(), planet);
            travelIdx.push_back(it - solarSystem.begin());
        }
        int sum = 0;
        int prev = 0;
        bool isFirst = true;
        for (auto it1 = travelIdx.begin(); it1 != travelIdx.end(); it1++)
        {
            if (isFirst)
            {
                prev = *it1;
                isFirst = false;
            }
            else
            {
                sum += dist[prev][*it1];
                prev = *it1;
            }
        }

       cout << sum << endl;
        totSum += sum;
    }
    cout << totSum << endl;

    system("pause");
    return 0;
}

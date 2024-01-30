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
    map<double, int> numbers;
    vector<double> order;

    string input;
    getline(cin, input);
    istringstream inp(input);

    int num;
    while (inp >> num)
    {
        numbers[num]++;

        if (!order.empty())
        {
            vector<double>::iterator it = find(order.begin(), order.end(), num); // numbers.begin(),numbers.end(),num);
            if (it == order.end())
            {
                order.push_back(num);
            }
        }
        else
        {
            order.push_back(num);
        }
    }

    for (double elem:order) {
        cout<<elem<<" - ";
        cout<<numbers.find(elem)->second<<" times"<<endl;
    }

    return 0;
}

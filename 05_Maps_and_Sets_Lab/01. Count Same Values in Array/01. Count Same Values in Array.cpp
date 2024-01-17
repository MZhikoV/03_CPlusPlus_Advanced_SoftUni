#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    map<double, int> occurances;
    vector <double> order;

    string input;
    getline(cin, input);

    istringstream inp(input);

    double num;
    while (inp >> num) {
        occurances[num]++;
        if (!order.empty()) {
            vector<double>::iterator it1= find(order.begin(), order.end(), num);
            if (it1 == order.end()) {
                order.push_back(num);
            }
        }
        else {
            order.push_back(num);
        }
    }

    for (double element : order) {
        cout << element << " - ";
        cout<<occurances.find(element)->second << " times" << endl;
    }
    return 0;
}
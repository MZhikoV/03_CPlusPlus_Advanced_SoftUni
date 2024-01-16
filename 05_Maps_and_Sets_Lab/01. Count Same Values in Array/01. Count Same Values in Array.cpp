#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    map<double, int> occurances;

    string input;
    getline(cin, input);

    istringstream inp(input);

    double num;
    while (inp >> num) {
        occurances[num]++;
    }

    for (pair<double,int> n : occurances) {
        cout << n.first << " - " << n.second << " times" << endl;
    }
    return 0;
}
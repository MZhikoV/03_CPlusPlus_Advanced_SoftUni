#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    multiset<int, greater<int>> numbers;

    string input;
    getline(cin, input);
    istringstream inp(input);
    double num;
    while (inp >> num)
    {
        int a = sqrt(num);
        if (a * a == num)
        {
            numbers.insert(num);
        }
    }
    for (double number : numbers)
    {
        cout << number << ' ';
    }
    cout << endl;

    return 0;
}

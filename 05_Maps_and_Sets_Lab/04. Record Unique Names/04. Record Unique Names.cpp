#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    array<string> names;

    int num;
    cin >> num;

    while (num--) {
        string name;
        cin >> name;

        auto it = find(names.begin(), names.end(), name);

        if (it == names.end()) {
            names.push_back(name);
        }
    }

    for (string output : names) {
        cout << output << endl;
    }
    return 0;
}
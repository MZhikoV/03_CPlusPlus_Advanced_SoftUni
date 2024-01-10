#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;


int main()
{
    string input;
    getline(cin, input);

    queue<string>names;

    while (input != "End") {
        if (input == "Paid") {
            while (!names.empty()) {
                cout << names.front() << endl;
                names.pop();
            }
        }
        else {
            names.push(input);
        }
        getline(cin, input);
    }

    string namesLeft;
    int peopleCount=0;
    while (!names.empty()) {
        peopleCount++;
        names.pop();
    }

    cout << peopleCount << " people remaining." << endl;

    return 0;
}
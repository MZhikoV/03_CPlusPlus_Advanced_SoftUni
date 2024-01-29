#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> names;

    string input;
    cin >> input;

    while (input != "End")
    {
        if (input == "Paid")
        {
            while (!names.empty())
            {
                cout << names.front() << endl;
                names.pop();
            }
        }
        else
        {
            names.push(input);
        }
        cin >> input;
    }
    int people = 0;
    while (!names.empty())
    {
        people++;
        names.pop();
    }

    cout << people << " people remaining." << endl;

    return 0;
}
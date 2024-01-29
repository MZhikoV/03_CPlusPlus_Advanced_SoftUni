#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

int main()
{

    stack<int> numbers;

    string input;
    getline(cin, input);
    istringstream inp(input);
    int num;
    while (inp >> num)
    {
        numbers.push(num);
    }
    cin >> input;
    while (input != "end")
    {
        if (input == "add")
        {
            int sec;
            cin >> num >> sec;
            numbers.push(num);
            numbers.push(sec);
        }
        if (input == "remove")
        {
            cin >> num;
            if (numbers.size() >= num)
            {
                while (num--)
                {
                    numbers.pop();
                }
            }
        }
                 cin >> input;
    }
    int sum = 0;
    while (!numbers.empty())
    {
        sum += numbers.top();
        numbers.pop();
    }
    cout << sum << endl;
    return 0;
}
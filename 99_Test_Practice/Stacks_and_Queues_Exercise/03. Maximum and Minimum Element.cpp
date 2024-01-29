#include <iostream>
#include <string>
#include <stack>
#include <climits>

using namespace std;

void minmaxElement(stack<int> nums, string pos)
{
    int min = INT_MAX;
    int max = INT_MIN;

    while (!nums.empty())
    {
        if (min > nums.top())
        {
            min = nums.top();
        }
        if (max < nums.top())
        {
            max = nums.top();
        }
        nums.pop();
    }
    if (pos == "min")
    {
        cout << min << endl;
    }
    else
    {
        cout << max << endl;
    }
}

int main()
{
    stack<int> numbers;
    int quer;
    cin >> quer;

    while (quer--)
    {
        int op;
        cin >> op;

        switch (op)
        {
        case 1:
            int num;
            cin >> num;
            numbers.push(num);
            break;
        case 2:
            numbers.pop();
            break;
        case 3:
        if (!numbers.empty()){
            minmaxElement(numbers, "max");
        }
            break;
        case 4:
        if (!numbers.empty()){
            minmaxElement(numbers, "min");
        }
            break;
        }
    }
    bool isFirst = true;
    while (!numbers.empty())
    {
        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            cout << ", ";
        }
        cout << numbers.top();
        numbers.pop();
    }
    cout << endl;
    return 0;
}
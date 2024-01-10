#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    stack<int> numbers;
    stack<char> operations;


    string input;
    getline(cin, input);

    istringstream inpS(input);

    int num;
    while (inpS >> num) {
        numbers.push(num);

        char c;
        if (inpS >> c) {
            operations.push(c);
        }
        else {
            break;
        }
    }

    int sum = 0;

    while (!operations.empty()) {
        char op = operations.top();
        operations.pop();
        int curnum = numbers.top();
        numbers.pop();

        switch (op) {
        case '+': sum += curnum; break;
        case '-': sum -= curnum; break;
        }
        
    }

    while (!numbers.empty()) {
        int num = numbers.top();
        numbers.pop();
        sum += num;
    }

    cout << sum << endl;

    return 0;
}
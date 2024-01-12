#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream inp(input);

    stack<char> parenth;

    char ch;
    char reqP; //requred parenthesis
    bool notBal = true;

    while (inp>>ch) {
        switch (ch) {
        case '(':
        case '[':
        case '{':
            parenth.push(ch);
            continue;
        case ')': reqP = '('; break;
        case ']': reqP = '['; break;
        case '}': reqP = '{'; break;
        default: break;
        }

        if (!parenth.empty() && parenth.top() == reqP) {
            parenth.pop();
        }
        else {
            notBal = false;
            break;           
        }
    }

    if (parenth.empty() && notBal) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
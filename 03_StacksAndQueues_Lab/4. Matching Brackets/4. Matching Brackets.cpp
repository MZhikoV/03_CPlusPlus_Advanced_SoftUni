#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;


int main()
{
    stack<size_t> openBracket;
    stack<string> print;

    string input;
    getline(cin, input);

    for (size_t i = 0; i < input.length(); i++) {
        switch (input[i]) {
        case '(': openBracket.push(i); break;
        case ')': string seq = input.substr(openBracket.top(), i - openBracket.top()+1); 
            openBracket.pop();
            cout << seq << endl;  break;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string input;
    getline(cin,input);

    stack<char>reverse;

    for (size_t c=0;c<input.size();c++) {
        reverse.push(input[c]);
    }

    while (!reverse.empty()) {
        cout<<reverse.top();
        reverse.pop();
    }
    cout<<endl;
    return 0;
}
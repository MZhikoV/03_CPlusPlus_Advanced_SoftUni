#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    stack<int>numbers;
    stack<char>operations;

    string input;
    getline(cin,input);

    istringstream inp(input);
    
    int num;
    while (inp>>num) {
        numbers.push(num);

        char oper;
        if (inp>>oper) {
            operations.push(oper);
        }
        else {
            break;
        }
    }
    int sum=0;

    while (!operations.empty()){
        char op=operations.top();
        operations.pop();

        int currnum=numbers.top();
        numbers.pop();

        switch(op) {
            case '+': sum+=currnum; break;
            case '-': sum-=currnum; break;
        } 
    }

    while (!numbers.empty()) {
        sum+=numbers.top();
        numbers.pop();
    }
cout<<sum<<endl;
return 0;
}
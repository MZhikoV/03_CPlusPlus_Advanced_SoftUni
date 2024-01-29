#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    stack<int> box;

    string input;
    getline(cin,input);
    istringstream inp(input);
    int clothes;
    while(inp>>clothes) {
        box.push(clothes);
    }
    int cap;
    cin>>cap; //rack capacity
    int rack=1;
    int currcap=cap;

    while (!box.empty()){
        if (currcap<box.top()){
            rack++;
            currcap=cap;
        }
        else {
            currcap-=box.top();
            box.pop();
        }
    }
cout<<rack<<endl;
return 0;
}
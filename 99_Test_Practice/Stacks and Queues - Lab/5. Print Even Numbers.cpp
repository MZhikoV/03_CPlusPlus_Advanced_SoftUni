#include <iostream>
#include <string>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    queue<int>numbers;

    string input;
    getline(cin,input);

    istringstream inp(input);
    int num;
    while (inp>>num){
        numbers.push(num);
    }
    bool isFirst=true;
    while (!numbers.empty()) {
        if (numbers.front()%2==0) {
            if (isFirst) {
                isFirst=false;
            }
            else {
                cout<<", ";
            }
            cout<<numbers.front();
        }
        numbers.pop();
    }
    cout<<endl;
return 0;
}
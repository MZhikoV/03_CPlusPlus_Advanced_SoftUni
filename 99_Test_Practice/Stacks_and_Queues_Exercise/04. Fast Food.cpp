#include <iostream>
#include <string>
#include <queue>
#include <sstream>
#include <climits>

using namespace std;

int main() {
    queue<int>orders;

    int total;
    cin>>total;cin.ignore();

    string input;
    getline(cin,input);
    istringstream inp(input);
    int num;
    int max=INT_MIN;
    while (inp>>num ) {
        orders.push(num);
        if (max<num) {
            max=num;
        }
    }
    bool isComplete=true;

    while(!orders.empty()) {
        if (orders.front()>total) {
            isComplete=false;
            break;
        }
        else {
            total-=orders.front();
            orders.pop();
        }
    }

    cout<<max<<endl;
    if (!isComplete) {
        cout<<"Orders left: ";
        while (!orders.empty()) {
            cout<<orders.front()<<' ';
            orders.pop();
        }
    }
    else {
        cout<<"Orders complete"<<endl;
    }
return 0;
}
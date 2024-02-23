#include <iostream>
#include <string>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    queue<string>names;

    string input;
    getline(cin,input);

    istringstream inp(input);

    string name;
    while (inp>>name) {
        names.push(name);
    }

    int num;
    cin>>num;

    string temp;

    while (names.size()>1){
        int circle=num;
        
        while (true) {
            if (circle!=1) {
                temp=names.front();
                names.pop();
                names.push(temp);
                circle--;
            }
            else {
                cout<<"Removed "<<names.front()<<endl;
                names.pop();
                break;
            }
        }
    }
    cout<<"Last is "<<names.front()<<endl;
return 0;
}
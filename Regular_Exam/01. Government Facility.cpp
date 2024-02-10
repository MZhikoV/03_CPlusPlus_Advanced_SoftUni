#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

//print queue
void printQ(queue<string> line, int no) {
    cout<<no<<": ";
    if (line.empty()) {
        cout<<"<empty>";
    }
    else {
    while (!line.empty()) {
        cout<<line.front()<<' ';
        line.pop();
    }
    }
    cout<<endl;
}

//print stack
void printS(stack<string> line, int no) {
    cout<<no<<": ";
    if (line.empty()) {
        cout<<"<empty>";
    }
    else {
    while (!line.empty()) {
        cout<<line.top()<<' ';
        line.pop();
    }
    }
    cout<<endl;
}

int main() {
    queue<string> line1;
    queue<string> line2;
    stack<string>line3;

    string name;
    int comm;
while (cin>>name && name!="5"){
    if (!isdigit(name[0])) {
        int num;
        cin>>num;

        switch (num) {
            case 1: line1.push(name); break;
            case 2: line2.push(name); break;
        }
    }
    else {
        comm=stoi(name);
        // if (comm==5) {
        //     break;
        // }
    string trans;

        switch (comm) {
            case 10: line1.pop(); break;
            case 20: line2.pop(); break;
            case 12: trans=line1.front();line1.pop();line2.push(trans); break;
            case 23: trans=line2.front();line2.pop();line3.push(trans); break;
            case 31: trans=line3.top();line3.pop();line1.push(trans); break;
            case 99: printQ(line1,1);printQ(line2,2);printS(line3,3); break;
        }
    }
}
    system("pause");
    return 0;
}

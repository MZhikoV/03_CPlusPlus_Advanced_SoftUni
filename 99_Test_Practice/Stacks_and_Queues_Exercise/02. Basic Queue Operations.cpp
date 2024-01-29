#include <iostream>
#include <string>
#include <queue>
#include <sstream>
#include <climits>

using namespace std;

int main() {
    queue<int>numbers;

    string input;
    getline(cin,input);
    istringstream inp(input);
    int adds,pops,finds;
    inp>>adds>>pops>>finds;

    string numbs;
    getline(cin,numbs);
    istringstream nums(numbs);
    int num;
    while (nums>>num) {
        numbers.push(num);
    }

    if (numbers.size()<=pops) { //check if the stack has fewer or equal element to those who need to be erased
        cout<<'0'<<endl;
        return 1;
    }
    else {                      //erase elements from the stack
        while (pops--) {
            numbers.pop();
        }
    }

    int min=INT_MAX;
    bool isFound=false;
    while (!numbers.empty()) {
        if (min>numbers.front()) {
            min=numbers.front();
        }
        if (numbers.front()==finds) {
            isFound=true;
            break;
        }
        numbers.pop();
    }
    
    if (isFound) {
        cout<<"true"<<endl;
    }
    else {
        cout<<min<<endl;
    }
return 0;
}
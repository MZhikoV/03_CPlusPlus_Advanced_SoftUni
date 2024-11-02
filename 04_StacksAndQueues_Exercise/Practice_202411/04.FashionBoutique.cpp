#include <iostream>
#include <stack>
#include <string>
#include <sstream>

int main() {
    std::string inp;
    std::getline(std::cin,inp);
    std::istringstream istr(inp);
    int capR;
    std::cin>>capR;
    std::stack<int> box;

    // std::string curr;
    int curr;
    while(istr>>curr) {
        box.push(curr);
    };

    int count=1;
    int currCap=0;

    while(!box.empty()) {
        int pile=box.top();
        if((currCap+pile)>capR) {
            count++;
            currCap=pile;
        } else {
            currCap+=pile;
        };
        box.pop();
    };

    std::cout<<count<<std::endl;

    system("pause");
    return 0;
}
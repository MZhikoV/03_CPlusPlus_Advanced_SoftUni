#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    set<string>names;
    vector<string>order;

    int num;
    cin>>num;

    while (num--) {
        string input;
        cin>>input;
        
        auto name=names.find(input);
        if (name==names.end()) {
            names.insert(input);
            order.push_back(input);
        }
    }

    for (string elem:order) {
        cout<<elem<<endl;
        }
    return 0;
}

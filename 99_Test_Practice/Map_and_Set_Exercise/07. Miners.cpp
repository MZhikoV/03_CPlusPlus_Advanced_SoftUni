#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<string,int> resources;
    vector<string>order;

    string input;
    cin>>input;

    while (input!="stop") {
        int quan;
        cin>>quan;

        auto it1=resources.find(input);

        if (it1==resources.end()){
            order.push_back(input);
        }

        resources[input]+=quan;

        cin>>input;
    }

    for (string elem:order) {
        auto it2=resources.find(elem);
        cout<<elem<<" -> "<<it2->second<<endl;
    }
return 0;
}

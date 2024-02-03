#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    char buffer[250]={1}; //storage for all the input strings
    char *nextstring=buffer;

    map<int, const char *> myMap;

    string name;
    while (cin>>name) {
        if (name=="end") {
            break;
        }
        int id;
        cin>>id;

        strcpy(nextstring,name.c_str());

        myMap[id]=nextstring;

        nextstring+=(name.length()+1);
    }

    int searchId;
    cin>>searchId;

    auto it1=myMap.find(searchId);

    if (it1==myMap.end()) {
        cout<<"[not found]"<<endl;
    }
    else {
        cout<<it1->second<<' '<<it1->first<<endl;
    }
    return 0;
}

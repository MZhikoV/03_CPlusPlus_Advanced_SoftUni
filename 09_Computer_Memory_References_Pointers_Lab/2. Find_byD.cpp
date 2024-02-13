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
    char buffer[150]={0};

    char * nextstring=buffer;

    map<int,const char *> data;

    string name;
    while (cin>>name && name!="end") {
        int id;
        cin>>id;

        strcpy(nextstring, name.c_str());

        data[id]=nextstring;

        nextstring+=(name.length()+1);
    }

    int search;
    cin>>search;
    auto it=data.find(search);
    if (it!=data.end()) {
        
    cout<<it->second<<' '<<it->first<<endl;
    }
    system("pause");
    return 0;
}

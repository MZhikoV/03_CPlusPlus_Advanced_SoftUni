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
    char buffer[50]={0};

    char * nameAd=buffer;

    map<int,const char *>data;


    string name;
    while(cin>>name && name!="end") {
        int num;
        cin>>num;

        strcpy(nameAd,name.c_str());

        data[num]=nameAd;

        nameAd+=name.length()+1;

    }

    int searchId;
    cin>>searchId;

    auto it=data.find(searchId);

    if (it==data.end()) {
        cout<<"[not found]"<<endl;
    }
    else {
        cout<<it->second<< ' '<<it->first<<endl;
    }
    system("pause");
    return 0;
}

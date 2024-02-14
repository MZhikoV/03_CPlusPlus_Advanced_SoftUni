#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool sortV(pair<int*,const char*> &a,pair<int*,const char*> &b) {
    return (*a.first<*b.first);
}

int main() {
    char buffer[60]={0};

    int* numAd=(int*) buffer;
    char * nameAd=(char *)(numAd+1);


    vector<pair<int*,const char *>>data;


    string name;
    while(cin>>name && name!="end") {
        int num;
        cin>>num;

        *numAd=num;
        strcpy(nameAd,name.c_str());

        data.push_back(pair<int*,const char *>{numAd,nameAd});

        numAd=(int*)(nameAd+name.length()+1);
        nameAd=(char*)(numAd+1);

    }

    sort(data.begin(),data.end(), sortV);

    for (auto elem:data) {
        cout<<elem.second<<' '<<*elem.first<<endl;
    }
    system("pause");
    return 0;
}

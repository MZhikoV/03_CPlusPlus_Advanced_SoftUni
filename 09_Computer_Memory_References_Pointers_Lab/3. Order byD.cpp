#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool compVector(const pair<int*,char *> &a, const pair<int*,char *> &b) {
    return (*a.first)<(*b.first);

}

int main() {

    char buffer[100]={0};

    int * nextInt=(int *) buffer;
    char * nextString=(char *) (nextInt+1);

    vector <pair<int*,char *>>data;

    string name;
    while (cin>>name && name!="end") {
        cin>>*nextInt;

        strcpy(nextString, name.c_str());

        data.push_back(pair<int*,char*>(nextInt,nextString));

        nextInt=(int *)  ( (char*)nextString + name.length()+1);
        nextString=(char*) (nextInt+1);

    }

    sort(data.begin(), data.end(), compVector);

    for (auto curr:data) {
        cout<<curr.second<< ' '<<*curr.first<<endl;
    }


    system("pause");
    return 0;
}

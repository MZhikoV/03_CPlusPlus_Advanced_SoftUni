#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void readSet(set<int> & inp,int num){
while (num--){
    int data;
    cin>>data;

    inp.insert(data);
}
}

int main() {

    set<int>first;
    set<int>second;

    int n,m;
    cin>>n>>m;

    readSet(first,n);
    readSet(second,m);

    for (int num:first) {
        auto it=second.find(num);

        if(it!=second.end()){
            cout<<num<<' ';
        }
    }
    cout<<endl;

    system("pause");
    return 0;
}

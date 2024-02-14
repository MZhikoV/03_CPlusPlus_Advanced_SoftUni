#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool sortV(const int &a, const int &b) {
    return a>b;
}

int main() {

    vector<int> v={10,50,100,20,60,40,90,80,5};

    // pointer to function
    // <return type> (* <name> )  <parameters>
    bool (*sortPtr) (const int &a, const int &b)=sortV;

    // reference to function
    // <return type> (& <name> )  <parameters>
    bool (&sortRef) (const int &a, const int &b)=sortV;




    sort(v.begin(),v.end(),sortPtr);

    for (int num:v){
        cout<<num<<endl;
    }
    system("pause");
    return 0;
}

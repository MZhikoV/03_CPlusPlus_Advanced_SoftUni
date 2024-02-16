#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool isLexSmaller(const string &a, const string &b){
    return a<b;
}
bool isShort(const string &a, const string &b){
    return a.length()<b.length();
}
bool isLong(const string &a, const string &b){
    return a.length()>b.length();
}


int main() {

    string input;
    getline(cin,input);

    int comm;
    cin>>comm;

    bool (*makeComm) (const string &, const string &);
    switch (comm) {
        case 1: makeComm=isLexSmaller;break;
        case 2: makeComm=isShort; break;
        case 3: makeComm=isLong; break;
    }
    istringstream inp(input);
        
    string currWord;
    string word;
    bool isFirst=true;
    while (inp>>word) {
        if (isFirst||makeComm(word,currWord)){
            currWord=word;
        }
        if (isFirst) {
            isFirst=false;
        }
    }
    cout<<currWord<<endl;
    system("pause");
    return 0;
}

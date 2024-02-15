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

    bool (*checkit)(const string &, const string &);

    if (comm==1) checkit=isLexSmaller;
    if (comm==2) checkit=isShort;
    if (comm==3) checkit=isLong;

    istringstream inp(input);
    string words;

    bool isFirst=true;
    string currWord;

    while (inp>>words) {
            if (isFirst || checkit(words,currWord)) {
                currWord=words;
            }
        if (isFirst) {
            isFirst=false;
        }
    }
    cout<<currWord<<endl;
    system("pause");
    return 0;
}

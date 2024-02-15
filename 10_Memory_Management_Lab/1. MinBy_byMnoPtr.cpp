#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string input;
    getline(cin,input);

    int comm;
    cin>>comm;

    istringstream inp(input);
    string words;

    bool isFirst=true;
    string currWord;

    while (inp>>words) {
        if (comm==1) {
            if (isFirst || currWord>words) {
                currWord=words;
            }
        }
        else if (comm==2) { 
            if (isFirst || currWord.length()>words.length()) {
                currWord=words;
            }
        }
        else if (comm==3) {
            if (isFirst || currWord.length()<words.length()) {
                currWord=words;
            }
        }
        if (isFirst) {
            isFirst=false;
        }
    }
    cout<<currWord<<endl;
    system("pause");
    return 0;
}

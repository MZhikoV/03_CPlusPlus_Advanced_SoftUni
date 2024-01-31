#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<string,int> words;
    vector<string> order;

    string input;
    getline(cin,input);
    for (size_t c=0;c<input.size();c++){
        input[c]=tolower(input[c]);
    }
    istringstream inp(input);
    string word;

    while (inp>>word) {
        auto it1=words.find(word);

        if (it1==words.end()) {
            order.push_back(word);
        }
        words[word]++;
    }
    bool isFirst=true;
    for (string elem:order) {
        auto it2=words.find(elem);

        if (it2->second%2!=0) {
            if (isFirst){
                isFirst=false;
            }
            else {
                cout<<", ";
            }
            cout<<it2->first;
        }
    }
    cout<<endl;
    return 0;
}

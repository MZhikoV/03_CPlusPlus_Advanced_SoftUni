#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

bool checkRange(const map<int,int> & ranges, const int &num){
bool isThere=false;
for (auto it=ranges.begin(); it!=ranges.end();it++) {
if ((num>=(it->first))&&(num<=(it->second))) {
    isThere=true;
break;
}
}
return (isThere? true:false);
}

int main() {

    map<int,int> ranges;

string range1;
cin>>range1;

while (range1!=".") {
    int range2;
    cin>>range2;
    
    ranges[(stoi(range1))]=range2;
    cin>>range1;
}
/*
//print map
for (auto num:ranges) {
    cout<<num.first<<' '<<num.second<<endl;
}
*/

string input;
cin>>input;

while (input!=".") {
    int num=stoi(input);
    cout<<(checkRange(ranges,num)? "in": "out")<<endl;
    cin>>input;
}



    return 0;
}
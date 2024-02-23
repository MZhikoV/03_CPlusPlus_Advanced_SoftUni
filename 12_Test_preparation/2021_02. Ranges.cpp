#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool checkRange( const multimap<int,int> &ranges, int & number) {
    auto it1=ranges.begin();
    if (number<it1->first) {
        return false;
    }
    else {    
    for (auto border:ranges) {
        if (number>=border.first && number<=border.second) {
            return true;
        }
    }
    }
    return false;
}

int main() {
    multimap<int,int> ranges;


string inpR;
while (getline(cin,inpR)&& inpR!=".") {
    istringstream inp(inpR);
    int sR,eR;
    inp>>sR>>eR;
    ranges.insert({sR,eR});
}

string num;
while (cin>>num && num!=".") {
    int number=stoi(num);
   if(checkRange(ranges,number)) {
    cout<<"in"<<endl;
   }
   else {
    cout<<"out"<<endl;
   }
}
    system("pause");
    return 0;
}

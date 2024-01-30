#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    set<string>carPlates;

    string input;
    getline(cin,input);

    while (input!="END") {
        istringstream inp(input);
        string op,plate;
        inp>>op>>plate;
        if (op=="IN,") {
            carPlates.insert(plate);
        }
        else if (op=="OUT,") {
            carPlates.erase(plate);
        }
        getline(cin,input);
    }
if (!carPlates.empty()){
    for (string num:carPlates){
        cout<<num<<endl;
    }
}
else {
    cout<<"Parking Lot is Empty"<<endl;
}
    return 0;
}
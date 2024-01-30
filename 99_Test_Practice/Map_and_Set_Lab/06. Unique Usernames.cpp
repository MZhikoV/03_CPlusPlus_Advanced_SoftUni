#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    set<string>names;

    int n;
    cin>>n;

    while (n--){
        string name;
        cin>>name;
        names.insert(name);
    }

    for (string nme:names) {
        cout<<nme<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;



int main() {
    vector <int> ints {9,8,7,6,5,4,3,2,1};

    int n=8;

    auto it=find(ints.begin(),ints.end(),n);

    int idx=it-ints.begin();
    cout<<idx<<endl;
    
    
    system("pause");
    return 0;
}

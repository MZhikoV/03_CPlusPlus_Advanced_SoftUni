#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<char>> arr;

    arr.resize(n);

    for (size_t r=0;r<n;r++) {
        arr[r].resize(n);
        for (size_t c=0;c<n;c++) {
            cin>>arr[r][c];
        }
    }

    char toFind;
    cin>>toFind;

    bool isFound=false;

    for (size_t r=0;r<n;r++) {
        for (size_t c=0;c<n;c++) {
            if (toFind==arr[r][c]) {
                cout<<'('<<r<<", "<<c<<')'<<endl;
                isFound=true;
                return 1;
            }
        }
    }
    if(!isFound) cout<<toFind<<" does not occur in the matrix"<<endl;
    return 0;
}

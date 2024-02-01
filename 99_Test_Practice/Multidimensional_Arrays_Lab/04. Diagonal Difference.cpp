#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr;
    arr.resize(n);

    int sumP=0, sumS=0;
    for (size_t r=0;r<n;r++) {
        arr[r].resize(n);
        for (size_t c=0;c<n;c++){
            cin>>arr[r][c];
            if (r==c) {
            sumP+=arr[r][r];
            }
        }
    }

    for (size_t c=0;c<n;c++){
        sumS+=arr[n-1-c][c];
    }

    cout<<abs(sumP-sumS)<<endl;
    return 0;
}

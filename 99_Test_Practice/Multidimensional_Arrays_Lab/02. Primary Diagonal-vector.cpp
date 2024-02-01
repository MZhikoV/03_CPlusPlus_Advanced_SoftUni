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
    vector<vector<int>> arr;
    arr.resize(n);

    int sum=0;
    for (size_t r=0;r<n;r++) {
        arr[r].resize(n);
        for (size_t c=0;c<n;c++){
            cin>>arr[r][c];
            if (r==c) {
            sum+=arr[r][r];
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}

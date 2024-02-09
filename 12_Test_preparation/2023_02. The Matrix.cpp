#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool checkPrimeWrong(int n) {
    if (n<=0) {
        return false;
    }

    for (int i=2;i<=n/2;i++) {
        if(n%i==0) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<vector<int>>arr;

    vector<int> primeN;

    int n;
    cin>>n;

    arr.resize(n);

    for (size_t r=0;r<n;r++) {
        arr[r].resize(n);
        for (size_t c=0;c<n;c++) {
            cin>>arr[r][c];
            if (r>c && c>n-1-r) {
                primeN.push_back(arr[r][c]);
            }
        }
    }
    int sum=0;
    for (int num:primeN) {
        if (checkPrimeWrong(num)) {
            sum+=num;
        }
    }

    cout<<sum<<endl;
    
    system("pause");
    return 0;
}

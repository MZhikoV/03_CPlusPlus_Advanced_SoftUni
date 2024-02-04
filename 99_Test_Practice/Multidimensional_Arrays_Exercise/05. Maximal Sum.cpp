#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    vector<vector<int>> arr;

    int rows,cols;
    cin>>rows>>cols;
    arr.resize(rows);

    for (int r=0;r<rows;r++){
        arr[r].resize(cols);
        for(size_t c=0;c<cols;c++) {
            cin>>arr[r][c];
        }
    }
    int maxSum=INT_MIN;
    int startR=0,startC=0;
    for (int r=0;r<rows-2;r++){
        for(size_t c=0;c<cols-2;c++) {
            int currSum=arr[r][c]+arr[r][c+1]+arr[r][c+2]
                        +arr[r+1][c]+arr[r+1][c+1]+arr[r+1][c+2]
                        +arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
            if (currSum>maxSum) {
                maxSum=currSum;
                startR=r;
                startC=c;
            }
        }
    }
    cout<<"Sum = "<<maxSum<<endl;

     for (int r=0;r<3;r++){
        for(size_t c=0;c<3;c++) {
            cout<<arr[r+startR][c+startC]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    int rows,cols;
    cin>>rows>>cols;
    
    //defining vector for 2d matrix
    vector<vector<int>> arr;

    //defining vector for result 
    vector<int> result;

    //resizing vectors, so they can have exactly "cols" number of columns
    arr.resize(cols);
    result.resize(cols);


    for (size_t r=0;r<rows;r++){
        //resizing each vector, so it can have exactly number of rows
        arr[r].resize(rows);

        for(size_t c=0;c<cols;c++){
            cin>>arr[r][c];
            result[c]+=arr[r][c];
        }
    }
for (int num:result){
    cout<<num<<endl;
}
    
    return 0;
}

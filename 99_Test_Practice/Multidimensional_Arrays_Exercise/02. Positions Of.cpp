#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> arr;

    int rows,cols;
    cin>>rows>>cols;
    arr.resize(rows);

    for (size_t r=0;r<rows;r++){
        arr[r].resize(cols);
        for (size_t c=0;c<cols;c++){
            cin>>arr[r][c];
        }
    }

    int srch;
    cin>>srch;
    bool isFound=false;
     for (size_t r=0;r<rows;r++){
        arr[r].resize(cols);
        for (size_t c=0;c<cols;c++){
            if (srch==arr[r][c]) {
                cout<<r<<' '<<c<<endl;
                isFound=true;
            }
        }
    }
    if (!isFound) {
        cout<<"not found"<<endl;
    }
    return 0;
}

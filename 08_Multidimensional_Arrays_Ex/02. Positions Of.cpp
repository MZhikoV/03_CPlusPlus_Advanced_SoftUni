#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<vector<int>>arr;

    int row,col;
    cin>>row>>col;

    arr.resize(row);
    for (size_t r=0; r<row;r++){
        arr[r].resize(col);
        for (size_t c=0;c<col;c++){
            cin>>arr[r][c];
        }
    }

    int num;
    cin>>num;

    bool isFound=false;
    for (size_t r=0; r<row;r++){
        for (size_t c=0;c<col;c++){
            if (num==arr[r][c]) {
                cout<<r<<' '<<c<<endl;
                isFound=true;
            }
        }
    }

    if(!isFound) {
        cout<<"not found"<<endl;
    }
    return 0;
}
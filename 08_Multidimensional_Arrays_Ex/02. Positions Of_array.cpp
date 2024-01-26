#include <iostream>
#include <array>

using namespace std;

int main () {
    

    int row,col;
    cin>>row>>col;

    int arr[row][col];

    for (size_t r=0; r<row;r++){
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
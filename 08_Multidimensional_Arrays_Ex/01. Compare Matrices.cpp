#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>

using namespace std;

void readMatrix(int &rows,int &cols, array<array<int,10>,10> &arr1) {
    cin>>rows;
    cin.ignore();
    for (size_t r=0;r<rows;r++) {
    string input;
    getline(cin,input);
    istringstream inp(input);
    cols=0;
    while (inp>>arr1[r][cols]) {

        cols++;
    }
    }
}

bool areEqual(  int &r1,int &c1,const array<array<int,10>,10> &arr1,
                int &r2,int &c2, const array<array<int,10>,10> &arr2) {
        if (r1!=r2 || c1!=c2) {
            return false;
        }
        for (size_t r=0;r<r1;r++){
            for (size_t c=0;c<c1;c++){
                if (arr1[r][c]!=arr2[r][c]) {
                    return false;
                }
            }
        }
        return true;
}

int main() {

    array<array<int, 10>,10> arr1;
    array<array<int, 10>,10> arr2;

    int r1=0,c1=0,r2=0,c2=0;

    readMatrix(r1,c1,arr1);
    readMatrix(r2,c2,arr2);

   cout<<( areEqual(r1,c1,arr1,r2,c2,arr2) ? "equal" : "not equal")<<endl;
    
    return 0;
}
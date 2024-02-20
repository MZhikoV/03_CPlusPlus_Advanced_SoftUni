#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void incrementAdjacentCells(int** matrix, const int &n, const int& m, const int &row, const int &col) {
    for (int i=max(row-1,0);i<=min(row+1,n-1);i++) {
        for (int j=max(col-1,0); j<=min(col+1,m-1);j++){
            matrix[i][j]++;
        }
    }
}

int main() {

    int n,m;
    cin>>n>>m>>ws;

    int ** matrix= new int*[n]; //We have n rows

    for (int i=0;i<n;i++){
        matrix[i]=new int[m] {}; //for each row we have m columns
    }

    for (int i=0;i<n;i++){
        string line;
        getline(cin,line);

        for (int j=0;j<m;j++) {
                if (line[j]=='!') {
                    incrementAdjacentCells(matrix,n,m,i,j);
                }
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    for (int i=0; i<n;i++) {
        delete[] matrix[i];
    }

    delete[] matrix;


    system("pause");
    return 0;
}

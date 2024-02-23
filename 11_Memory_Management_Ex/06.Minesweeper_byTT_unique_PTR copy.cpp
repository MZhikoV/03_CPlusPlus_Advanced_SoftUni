#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

void incrementAdjacentCells(const unique_ptr<unique_ptr<int[]>[]> & matrix, const int &n, const int& m, const int &row, const int &col) {
    for (int i=max(row-1,0);i<=min(row+1,n-1);i++) {
        for (int j=max(col-1,0); j<=min(col+1,m-1);j++){
            matrix[i][j]++;
        }
    }
}

int main() {

    int n,m;
    cin>>n>>m>>ws;

    unique_ptr<unique_ptr<int[]>[]> matrix = make_unique<unique_ptr<int[]>[]>(n); //We have n rows

    for (int i=0;i<n;i++){
        matrix[i]=make_unique<int[]>(m); //for each row we have m columns
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



    system("pause");
    return 0;
}

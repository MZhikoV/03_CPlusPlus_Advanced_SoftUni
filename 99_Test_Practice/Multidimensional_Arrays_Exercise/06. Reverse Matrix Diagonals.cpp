#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void readVectorMatrix(int &rows, int &cols, vector<vector<int>> &arr);

void printMatrixDiagonalsLtoR(int rows, int cols, const vector<vector<int>> &arr);

void printMatrixDiagonalsRtoL(int rows, int cols, const vector<vector<int>> &arr);

int main()
{
    int rows, cols;

    vector<vector<int>> arr;

    readVectorMatrix(rows, cols, arr);

  //  printMatrixDiagonalsLtoR(rows, cols, arr);

    printMatrixDiagonalsRtoL(rows, cols, arr);

        return 0;
}

//read values from console and wrute them in vector matrix/array
void readVectorMatrix(int &rows, int &cols, vector<vector<int>> &arr)
{
    cin >> rows >> cols;

    arr.resize(rows, vector<int>(cols)); // resize the vector, so it can take the size of the input matrix/array

    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < cols; c++)
        {
            cin >> arr[r][c];
        }
    }
}

//print matrix diagonal from top left to bottom right
void printMatrixDiagonalsLtoR(int rows, int cols, const vector<vector<int>> &arr) {
    for (size_t r=0;r<rows;r++){
        int i=r, j=0;
        while (i>=0 && j<cols) {
            cout<<arr[i][j]<<' ';
            i--; j++;
        }
        cout<<endl;

    }

    int j=1;
    while (j!=cols){
        int i=rows-1;
    for (size_t c=j;c<cols;c++){
            cout<<arr[i][c]<<' ';
            i--;
        }
        cout<<endl;
        j++;
    }
}


//print matrix diagonal from bottom right to top left
void printMatrixDiagonalsRtoL(int rows, int cols, const vector<vector<int>> &arr) {
    int j=cols-1;
    while (j!=0){
        int i=rows;
    for (size_t c=j;c<cols;c++){
            i--; 
            cout<<arr[i][c]<<' ';
            if (i==0) break;
        }
        cout<<endl;
        j--;
    }

    for (size_t r=rows-1;;r--){
        int i=r, j=0;
        while (i>=0 && j<cols) {
            cout<<arr[i][j]<<' ';
            i--; j++;
        }
        cout<<endl;
        if (r==0) break;

    }

}
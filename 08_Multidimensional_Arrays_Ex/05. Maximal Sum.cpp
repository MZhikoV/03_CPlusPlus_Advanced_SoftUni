#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void readVectorMatrix(int &rows, int &cols, vector<vector<int>> &arr);

int main()
{

    int rows, cols;

    vector<vector<int>> arr;

    readVectorMatrix(rows, cols, arr);

    int sum = INT_MIN;
    int indxC = 0, indxR = 0;

    for (size_t r = 0; r < rows - 2; r++)
    {
        for (size_t c = 0; c < cols - 2; c++)
        {
            int currSum =
                arr[r][c] + arr[r][c + 1] + arr[r][c + 2] +
                arr[r + 1][c] + arr[r + 1][c + 1] + arr[r + 1][c + 2] +
                arr[r + 2][c] + arr[r + 2][c + 1] + arr[r + 2][c + 2];
            if (sum < currSum)
            {
                sum = currSum;
                indxR = r;
                indxC = c;
            }
        }
    }

    cout<<"Sum = "<<sum<<endl;

    for (size_t r = indxR; r < indxR + 3; r++)
    {
        for (size_t c = indxC; c < indxC + 3; c++)
        {
            cout << arr[r][c] << ' ';
        }
        cout << endl;
    }

    return 0;
}

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
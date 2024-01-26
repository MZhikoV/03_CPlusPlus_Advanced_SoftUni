#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>

using namespace std;

void readMatrix(int &rows, int &cols, vector<vector<char>> &arr)
{
    cin >> rows >> cols;

    arr.resize(rows, vector<char>(cols));

    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < cols; c++)
        {
            cin >> arr[r][c];
        }
    }
}

int main()
{

    vector<vector<char>> arr;

    int rows, cols;

    readMatrix(rows, cols, arr);

    int sum = 0;

    bool isFound = false;
    if (rows != 1 && cols != 1)
    {
        for (size_t r = 0; r < rows - 1; r++)
        {
            for (size_t c = 0; c < cols - 1; c++)
            {
                if (arr[r][c] == arr[r + 1][c + 1])
                {
                    if (arr[r][c + 1] == arr[r + 1][c] && arr[r][c]==arr[r][c+1])
                    {
                        sum++;
                        isFound = true;
                    }
                }
            }
        }
    }

    cout << sum << endl;
    // isFound ? cout<<sum : cout<<"No 2 x 2 squares of equal cells exist.";
    // cout<<endl;
    return 0;
}
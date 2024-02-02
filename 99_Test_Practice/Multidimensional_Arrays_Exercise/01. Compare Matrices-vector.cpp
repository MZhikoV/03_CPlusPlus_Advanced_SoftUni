#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

// read array from input
void readArray(vector<vector<int>> & arr, int &rows, int &cols)
{
    cin >> rows;
    cin.ignore();
    arr.resize(rows);
    for (size_t r = 0; r < rows; r++)
    {
        string input;
        getline(cin, input);
        istringstream inp(input);
        int num;
        cols = 0;
        while (inp >>num)
        {
             arr[r].push_back(num);
            cols++;
        }
    }
}

// compare two vector arrays
bool equalArrays(const vector<vector<int>> &arr1, const vector<vector<int>> &arr2,
                 const int &rows, const int &cols)
{
    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < cols; c++)
        {
            if (arr1[r][c] != arr2[r][c])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> arr1;
    vector<vector<int>> arr2;

    int rows1, cols1;
    int rows2, cols2;

    readArray(arr1, rows1, cols1);
    readArray(arr2, rows2, cols2);

    bool areEqual = true;
    if ((rows1 != rows2) || (cols1 != cols2))
    {
        areEqual = false;
    }
    else
    {
        if (!equalArrays(arr1, arr2, rows1, cols1))
        {
            areEqual = false;
        }
    }

    cout << (areEqual ? "equal" : "not equal") << endl;

    return 0;
}

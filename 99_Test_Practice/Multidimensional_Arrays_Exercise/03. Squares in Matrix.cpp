#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<char>> arr;

    int rows, cols;
    cin >> rows >> cols;
    arr.resize(rows);

    for (size_t r = 0; r < rows; r++)
    {
        arr[r].resize(cols);
        for (size_t c = 0; c < cols; c++)
        {
            cin >> arr[r][c];
        }
    }
    int sum = 0;
    for (size_t r = 0; r < rows - 1; r++)
    {
        for (size_t c = 0; c < cols - 1; c++)
        {
            if (arr[r][c] == arr[r][c + 1] && arr[r][c] == arr[r + 1][c] && arr[r][c] == arr[r + 1][c + 1])
            {
                sum++;
            }
        }
    }

    cout << sum << endl;
    return 0;
}

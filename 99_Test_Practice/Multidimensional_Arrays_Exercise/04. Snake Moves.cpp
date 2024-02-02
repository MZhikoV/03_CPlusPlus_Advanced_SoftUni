#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void writeDir(vector<vector<char>> &arr, string dir, queue<char> &snake, int &cols, const size_t &r)
{
    if (dir == "forward")
    {
        for (size_t c = 0; c < cols; c++)
        {
            char temp = snake.front();
            arr[r][c] = temp;
            snake.pop();
            snake.push(temp);
        }
    }
    else
    {
        for (size_t c = cols - 1; c >= 0; c--)
        {
            char temp = snake.front();
            arr[r][c] = temp;
            snake.pop();
            snake.push(temp);
            if (c == 0)
                break;
        }
    }
}

int main()
{

    vector<vector<char>> arr;

    int rows, cols;
    cin >> rows >> cols;

    arr.resize(rows);

    string input;
    cin >> input;

    queue<char> snake;
    for (size_t c = 0; c < input.size(); c++)
    {
        snake.push(input[c]);
    }

    bool isFWD = true;
    for (size_t r = 0; r < rows; r++)
    {
        arr[r].resize(cols);
        if (isFWD)
        {
            writeDir(arr, "forward", snake, cols, r);
            isFWD = false;
        }
        else
        {
            writeDir(arr, "backwards", snake, cols, r);
            isFWD = true;
        }
    }

    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < cols; c++)
        {
            cout << arr[r][c];
        }
        cout << endl;
    }

    return 0;
}

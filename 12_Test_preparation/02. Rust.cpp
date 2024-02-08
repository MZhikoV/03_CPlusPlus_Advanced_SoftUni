#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    vector<vector<char>> arr;
    queue<int> rows;
    queue<int> cols;

    arr.resize(10);

    for (size_t r = 0; r < 10; r++)
    {
        arr[r].resize(10);
        for (size_t c = 0; c < 10; c++)
        {
            cin >> arr[r][c];
        }
    }
    int time;
    cin >> time;
    int it = 0;
    int curCC;
    while (time--)
    {
        bool found = false;
        for (size_t r = 0; r < 10; r++)
        {
            for (size_t c = 0; c < 10; c++)
            {
                if (arr[r][c] == '!')
                {
                    rows.push(r);
                    cols.push(c);
                }
            }
        }

        while (!rows.empty())
        {
            int row = rows.front();
            int col = cols.front();
            bool isOverC = false;
            bool isOverR = false;

            if ((col + 1) < 10 && arr[row][col + 1] != '#')
                arr[row][col + 1] = '!';

            if ((col - 1) > 0 && !isOverC)
            {
                if (arr[row][col - 1] != '#')
                {
                    arr[row][col - 1] = '!';
                }
            }
            if (col - 1 == 0)
            {
                isOverC = true;
                if (arr[row][col - 1] != '#')
                {
                    arr[row][col - 1] = '!';
                }
            }

            if ((row - 1) >= 0 && arr[row - 1][col] != '#')
                arr[row - 1][col] = '!';

            if ((row - 1) > 0 && !isOverR)
            {
                if (arr[row - 1][col] != '#')
                {
                    arr[row - 1][col] = '!';
                }
            }
            if (row - 1 == 0)
            {
                isOverR = true;
                if (arr[row - 1][col] != '#')
                {
                    arr[row - 1][col] = '!';
                }
            }

            if ((row + 1) < 10 && arr[row + 1][col] != '#')
                arr[row + 1][col] = '!';

            rows.pop();
            cols.pop();
        }
    }

    for (size_t r = 0; r < 10; r++)
    {
        for (size_t c = 0; c < 10; c++)
        {
            cout << arr[r][c];
        }
        cout << endl;
    }
    cout << it << endl;
    system("pause");
    return 0;
}

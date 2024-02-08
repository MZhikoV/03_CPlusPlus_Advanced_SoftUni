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
                    if (found && curCC == c)
                    {
                        continue;
                        found = false;
                    }
                    else
                    {
                        if (r > 0 && arr[r - 1][c] != '#')
                        {
                            arr[r - 1][c] = '!';
                        }
                        if (r < (10 - 1) && arr[r + 1][c] != '#')
                        {
                            arr[r + 1][c] = '!';
                        }
                        if (c > 0 && arr[r][c - 1] != '#')
                        {
                            arr[r][c - 1] = '!';
                        }
                        if (c < (10 - 1) && arr[r][c + 1] != '#')
                        {
                            arr[r][c + 1] = '!';
                        }
                        found = true;
                        curCC = c;
                        c++;
                    }
                }
            }
        }
        it++;
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

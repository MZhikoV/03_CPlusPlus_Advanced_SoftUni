#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string inputRows;
    cin >> inputRows;
    inputRows.erase(inputRows.end() - 1);
    int rows = stoi(inputRows);
    char typeM;
    cin >> typeM;

    int arr[rows][rows];
    int i = 1;

    if (typeM == 'A')
    {
        for (size_t c = 0; c < rows; c++)
        {
            for (size_t r = 0; r < rows; r++)
            {
                arr[r][c] = i;
                i++;
            }
        }
    }
    else
    {
        bool down = true;
        for (size_t c = 0; c < rows; c++)
        {
            if (down)
            {
                for (size_t r = 0; r < rows; r++)
                {
                    arr[r][c] = i;
                    i++;
                }
                down = false;
            }
            else
            {
                for (size_t r = rows - 1;; r--)
                {
                    arr[r][c] = i;
                    i++;
                    if (r == 0)
                        break;
                }
                down = true;
            }
        }
    }

    for (size_t r=0;r<rows;r++){
        for (size_t c=0;c<rows;c++){
            cout<<arr[r][c]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
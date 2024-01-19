#include <iostream>

using namespace std;

const int MAX = 1000;

int main()
{
    int row;
    cin >> row;
    char arr[MAX][MAX];

    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < row; j++) {
            cin >> arr[i][j];
        }
    }

    char symb;
    cin >> symb;

    bool isThere = false;


    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < row; j++) {
            if (arr[i][j] == symb) {
                isThere = true;
                cout << '(' << i << ", " << j << ')' << endl;
                exit(0);
            }
        }
    }
    if (!isThere) {
        cout << symb << " does not occur in the matrix" << endl;
    }
    return 0;
}
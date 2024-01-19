#include <iostream>

using namespace std;

const int MAX = 50;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[MAX][MAX];

    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    for (size_t j = 0; j < col; j++) {
        int sum = 0;
        for (size_t i = 0; i < row; i++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}
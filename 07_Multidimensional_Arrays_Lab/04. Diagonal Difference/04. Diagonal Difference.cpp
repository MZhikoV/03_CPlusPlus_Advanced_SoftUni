#include <iostream>
using namespace std;

const int MAX = 50;

int main()
{
    int row;
    cin >> row;
    int arr[MAX][MAX];

    int sumP = 0;

    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < row; j++) {
            cin >> arr[i][j];
            if (i == j) {
                sumP += arr[i][j];
            }
        }
    }

    int sumS = 0;

            for (size_t j = 0; j < row; j++) {
             sumS += arr[row-1-j][j];
            }

int sum = abs(sumP + sumS);

    cout << sum << endl;
    return 0;
}

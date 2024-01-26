#include <iostream>
using namespace std;


int main()
{
    int dim;
    cin >> dim;
    int arr[dim][dim];

    int sumP = 0;

    for (size_t i = 0; i < dim; i++) {
        for (size_t j = 0; j < dim; j++) {
            cin >> arr[i][j];
            if (i == j) {
                sumP += arr[i][j];
            }
        }
    }

    int sumS = 0;

            for (size_t j = 0; j < dim; j++) {
             sumS += arr[dim-1-j][j];
            }

int sum = abs(sumP - sumS);

    cout << sum << endl;
    return 0;
}

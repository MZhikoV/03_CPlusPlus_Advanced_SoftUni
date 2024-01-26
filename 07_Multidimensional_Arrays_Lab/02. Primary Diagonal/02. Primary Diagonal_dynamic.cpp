#include <iostream>

using namespace std;

int main()
{
    int dim;
    cin >> dim;
    int arr[dim][dim];
    
    int sum = 0;

    for (size_t i = 0; i < dim; i++) {
        for (size_t j = 0; j < dim; j++) {
            cin >> arr[i][j];
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}

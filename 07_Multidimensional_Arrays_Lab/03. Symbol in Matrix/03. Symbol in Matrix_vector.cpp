#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int dim;
    cin >> dim;
   
   array<array<char>> arr;

   arr.resize(dim);
    for (size_t i = 0; i < dim; i++) {
        arr[i].resize(dim);
        for (size_t j = 0; j < dim; j++) {
            cin >> arr[i][j];
        }
    }

    char symb;
    cin >> symb;

    bool isThere = false;


    for (size_t i = 0; i < dim; i++) {
        for (size_t j = 0; j < dim; j++) {
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
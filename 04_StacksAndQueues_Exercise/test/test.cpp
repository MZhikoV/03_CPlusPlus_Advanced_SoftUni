#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;

int main() {
    

    long long int a[MAX][MAX];

    int qi, qj;

    int n, q;
    cin >> n >> q;

    for (int i = 0,el; i < n; i++) {
        cin >> el;

        for (int j = 0; j < el; j++) {
            cin >> a[i][j];
        }
    }
    for (int qq = 0; qq < q; qq++) {
        cin >> qi >> qj;
        cout << a[qi][qj] << endl;
    }


    return 0;
}
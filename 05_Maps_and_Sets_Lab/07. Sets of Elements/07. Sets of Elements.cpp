#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    set<int> setN;
    set<int>setM;

    int numN, numM;
    cin >> numN >> numM;

    while (numN--) {
        int num;
        cin >> num;
        setN.insert(num);
    }

    while (numM--) {
        int num;
        cin >> num;
        setM.insert(num);
    }

    for (int n : setN) {
        auto it = find(setM.begin(), setM.end(), n);
        if (it != setM.end()) {
            cout << n << ' ';
        }
    }
    return 0;
}

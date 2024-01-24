#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool isSquareCheck(int a) {
    if (a >= 0) {
        int check = sqrt(a);

        return(check * check == a);
    }
    return false;
}

int main()
{
    multiset<int, greater<int>>numbers;

    string input;
    getline(cin, input);

    istringstream inp(input);

    double number;

    while (inp >> number) {
        if (isSquareCheck(number)) {

            numbers.insert(number);
        }
    }
  //  sort(numbers.begin(), numbers.end(), greater<int>());

    for (int num : numbers) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}
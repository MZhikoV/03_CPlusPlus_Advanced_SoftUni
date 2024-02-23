#include <iostream>
#include <string>
#include <sstream>
#include <vector>
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
    array<int>numbers;

    string input;
    getline(cin, input);

    istringstream inp(input);

    double number;

    while (inp >> number) {
        if (isSquareCheck(number)) {

            numbers.push_back(number);
        }
    }
    sort(numbers.begin(), numbers.end(), greater<int>());

    for (int num : numbers) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    map <double, int> numbers;

    string input;
    getline(cin, input);

    istringstream inp(input);

    double num;

    //writing input in map
    while (inp >> num) {
        numbers[num]++;
    }

    for (pair<double, int> number : numbers) {
        cout << number.first << " -> " << number.second << endl;
    }
    return 0;
}
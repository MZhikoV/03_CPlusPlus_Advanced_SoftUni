#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    set<double>numbers;
    
    string input;
    getline(cin, input);

    istringstream inp(input);

    double number;

    while (inp >> number) {
        numbers.insert(number);
    }

    bool isfirst = true;

    for (double num : numbers) {
        if (isfirst) {
            isfirst = false;
        }
        else {
            cout << " <= ";
        }
        cout << num;
    }
    cout << endl;
    return 0;
}
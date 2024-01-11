#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <queue>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream inp(input);
    
    stack<int>clothes;


    int n;
    while (inp >> n) {
        clothes.push(n);
    }

    int capacity;
    cin >> capacity;

    int sum = 0;
    int racks = 0;

    while (!clothes.empty()) {
        sum += clothes.top();
        if (sum > capacity) {
            racks++;
            sum = clothes.top();
        }
        else if (sum == capacity) {
            racks++;
            sum = 0;
        }
        clothes.pop();
    }

    if (sum > 0) {
        racks++;
    }

    cout << racks << endl;

    return 0;
}
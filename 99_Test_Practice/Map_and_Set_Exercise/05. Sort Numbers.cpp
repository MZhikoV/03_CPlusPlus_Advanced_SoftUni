#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    multiset<int> numbers;

    string input;
    getline(cin,input);
    istringstream inp(input);
    double num;
    while (inp>>num){
        numbers.insert(num);
    }
    bool isFirst=true;
    for (double number:numbers) {
        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            cout << " <= ";
        }
        cout<<number;
    }
cout<<endl;
    return 0;
}

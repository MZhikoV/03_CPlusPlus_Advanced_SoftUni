#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<double,int> numbers;

    string input;
    getline(cin,input);
    istringstream inp(input);
    double num;
    while (inp>>num){
        numbers[num]++;
    }

    for (pair<double,int> number:numbers) {
        cout<<number.first<<" -> "<<number.second<<endl;
    }
    return 0;
}

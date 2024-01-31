#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    set<double,greater<double>> numbers;

    string input;
    getline(cin,input);
    istringstream inp(input);
    double num;
    while (inp>>num){
        numbers.insert(num);
    }
    int count=3;
    for (double number:numbers) {
        cout<<number<<' ';
        count--;
        if(count==0) {
            break;
        }
    }
cout<<endl;
    return 0;
}

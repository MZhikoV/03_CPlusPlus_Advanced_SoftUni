#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<int,int>numbers;

    int n;
    cin>>n;

    while (n--) {
        int num;
        cin>>num;
        numbers[num]++;
    }

    for(pair<int,int> number:numbers) {
        if (number.second%2==0) {
            cout<<number.first<<endl;
            break;
        }
    }
    return 0;
}

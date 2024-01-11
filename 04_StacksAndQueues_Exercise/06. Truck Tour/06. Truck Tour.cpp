#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <queue>

using namespace std;

bool checkit(queue<int>a, queue<int> b) {
    int reserve=0;

    while (!a.empty()) {
        reserve+= a.front() - b.front();
        if (reserve < 0) {
            return false;
        }
        a.pop();
        b.pop();
    }
    return true;
}

int main()
{
    string nums;
    getline(cin, nums);
    int n;
    n=stoi(nums);

    queue<int>liters;
    queue<int>kms;

    while (n != 0) {
        string input;
        getline(cin, input);

        istringstream inp(input);

        int lt, km;
        
        inp >> lt >> km;

        liters.push(lt);
        kms.push(km);

        n--;
    }

    int index = 0;
    while (!liters.empty()) {
        if (liters.front() >= kms.front()) {
            if (checkit(liters, kms)) {
                cout << index << endl;
                break;
            }
        }
        index++;
        liters.pop();
        kms.pop();
    }



    return 0;
}
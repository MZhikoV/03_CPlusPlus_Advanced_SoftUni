#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool isParse(const char * a, int & number) {
       int digits=0;
        while (isdigit(*a)) {
            digits*=10;
            digits+=(*a-'0');
            a++;
        }
        if (*a=='\0') {
            number=digits;
            return true;
        }
        return false;
    }

int main() {
    string aStr,bStr;
    cin>>aStr>>bStr;

    int a,b;

    bool isA=isParse(aStr.c_str(),a);
    bool isB=isParse(bStr.c_str(),b);

    if (isA && isB) {
        cout<<a+b<<endl;
    }
    else {
        if (!isA) {
            cout<<"[error] "<<aStr<<endl;
            cout<<bStr<<endl;
        }
        else if (!isB) {
            cout<<"[error] "<<bStr<<endl;
            cout<<aStr<<endl;
        }
    }
    system("pause");
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

bool parse(const char * number,int &digit) {

    int result =0;

    while (isdigit(*number)) {
        result*=10;
        result+=((*number)-'0');
        number++;
    }

    if (*number=='\0') {
        digit=result;
        return true;
    }


    return false;
}

int main() {

    string a,b;
    cin>>a>>b;

    int num1,num2;

    bool aRes=parse(a.c_str(),num1);
    bool bRes=parse(b.c_str(),num2);

    if (aRes&&bRes) {
        cout<<num1+num2<<endl;
    }
    else {

    }

    if (!aRes) {
        cout<<"[error] "<<a<<endl;
        cout<<b<<endl;
    }
    else if (!bRes) {
        cout<<"[error] "<<b<<endl;
        cout<<a<<endl;
    }
    system("pause");
    return 0;
}

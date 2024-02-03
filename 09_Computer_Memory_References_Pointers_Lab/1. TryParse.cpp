#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool isParse(const char * number, int &digit){
    int result=0;

    while (*number>='0' && *number<='9') {
        result*=10;
        result+=(*number)-'0';
        *number++;
    }

    if (*number=='\0') {
        digit=result;
        return true;
    }

    return false; //invalid number

}

int main() {
    string fStr,sStr;
    cin>>fStr>>sStr;

    int num1,num2;

    bool fPars=isParse(fStr.c_str(),num1);
    bool sPars=isParse(sStr.c_str(),num2);

    if (fPars && sPars) {
        cout<<num1+num2;
    }
    else {
        cout<<"[error] "<<fStr<<endl<<sStr<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string text="abcd";
    const char * textPtr=text.c_str();

    cout<<textPtr<<endl;
    cout<<*textPtr<<endl;
    cout<<&text<<endl;
    



    system("pause");
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline (cin,input);

    for (size_t c=0;c<input.length();c++) {
        cout<<(int)input[c]<<endl;
    }




    system("pause");
    return 0;
}

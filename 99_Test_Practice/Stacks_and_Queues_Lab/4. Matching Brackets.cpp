#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<size_t>pos;
    
    string input;
    getline(cin,input);

    for (size_t c=0;c<input.size();c++) {
        switch (input[c]) {
            case '(':   pos.push(c);break;
            case ')':   string seq=input.substr(pos.top(),c-pos.top()+1); pos.pop();
                        cout<<seq<<endl;
                        break;
        }
    }
return 0;
}
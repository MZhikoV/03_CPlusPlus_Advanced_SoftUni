#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

//print queue
void printQ(queue<char> line, string type) {
   
    if (line.empty()) {
        if (type=="white")
        cout<<"<no white figures>";
        else {
            cout<<"<no black figures>";
        }
    }
    else {
    while (!line.empty()) {
        cout<<line.front();
        line.pop();
    }
    }
    cout<<endl;
}

int main() {
    vector<vector<char>> arr;
    int n=8;
    arr.resize(n);

    queue<char>black;
    queue<char>white;

    for (size_t r=0; r<n;r++) {
        arr[r].resize(n);
        for (size_t c=0;c<n;c++){
            cin>>arr[r][c];
            if (arr[r][c]!='.') {
                if (isupper(arr[r][c])) {
                    white.push(arr[r][c]);
                    arr[r][c]=tolower(arr[r][c]);
                }
                else {
                    black.push(arr[r][c]);
                    arr[r][c]=toupper(arr[r][c]);
                }
            }
        }
        
    }

    printQ(white,"white");
    printQ(black,"black");


//cout<<endl;
    for (size_t r=0; r<n;r++) {
        for (size_t c=0;c<n;c++){
            cout<<arr[r][c];
        }
        cout<<endl;
    }

    
    
    system("pause");
    return 0;
}

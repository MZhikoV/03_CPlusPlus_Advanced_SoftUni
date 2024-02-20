#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main() {

int m,n;
cin>>n>>m;

int totalPos=n*m;

unique_ptr<int[]> flatMtrix= make_unique<int[]>(totalPos);

for (int i=0;i<totalPos;i++) {
    cin>>flatMtrix[i];
}

int r,c;
cin>>r>>c;

for (int i=0;i<r;i++) {
    for (int j=0;j<c;j++){
        cout<<flatMtrix[i*m+j]<<' ';
    }
    cout<<endl;
}
system("pause");
    return 0;
}

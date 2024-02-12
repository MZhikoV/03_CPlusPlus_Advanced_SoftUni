#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[3] {13,42,69};
    int * ptr=arr;
    ptr[1]=-42;
    cout<<arr[1]<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<ptr[1]<<endl;
    cout<<*ptr+1<<endl;



    system("pause");
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

void swap(int &a, int&b) {
    int temp=a;
    a=b;
    b=temp;
}

void removeNegative(list<int> & nums) {
auto it=nums.begin();
while (it!=nums.end()) {
    if(*it<0) {
        it=nums.erase(it);
    }
    else {
        it++;
    }
}

}

int main() {
    int x=42,y=12;
    cout<<"Before swap x= "<<x<<" ,y= "<<y<<endl;
    swap(x,y);
    cout<<"After swap x= "<<x<<" ,y= "<<y<<endl;

    list<int> values {-1,1,5,-7,5,-9,6,8,-7};
    removeNegative(values);

    for (int elem:values) {
        cout<<elem<<endl;
    }





    system("pause");
    return 0;
}

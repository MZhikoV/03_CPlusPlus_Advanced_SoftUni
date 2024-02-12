#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void f() {

}

int main() {
    int x=42;
    int * adressX=&x;
    cout<<x<<" at adress " <<adressX<<endl; 

    void *ptr=(void*)&f;
    cout<<"f()"<<" code at "<<ptr<<", but not "<<((void *)&f)<<endl;

    double ( & absAddress) (double) = abs;
    cout<<"abs(double)"<<" code at "<<(void *)absAddress<<endl;

    cout<< (*absAddress) (-5)<<endl;

    int arr[]={100,200};
    int * arrP=arr;
    cout<<arrP<<' '<<&arr<<' '<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;




    system("pause");
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    multimap<double,string,greater<double>> data;
    double totSum=0;
    int prod;
    cin>>prod;
    while(prod--) {
        string pName;
        cin>>pName;
        double pPrice,pCount;
        cin>>pPrice>>pCount;
        double pSum=pPrice*pCount;
        totSum+=pSum;
        data.insert(make_pair(pSum,pName));
    }

    cout<<"The total sum is: "<<totSum<<" lv."<<endl;

    for (auto elem:data) {
        cout<<elem.second<<' '<<elem.first<<endl;
    }



    system("pause");
    return 0;
}

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int products;
    cin>>products;

    //map<vector<string>,vector<double>>prices;
    multimap<double,string, greater<double>> prices;

    double priceSum=0;
    while (products--) {
        string prod;
        cin>>prod;
        double price,quan;
        cin>>price>>quan;
        double sum=price*quan;

        prices.insert(pair<double,string>(sum,prod));

        priceSum+=sum;

    }

    cout<<"The total sum is: "<<priceSum<<" lv."<<endl;

    for (auto elem:prices) {
        cout<<elem.second<<' '<<elem.first<<endl;
    }



    return 0;
}
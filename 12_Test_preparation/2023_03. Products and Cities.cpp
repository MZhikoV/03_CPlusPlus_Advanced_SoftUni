#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<string,double> cityProd;

    int n;
    cin>>n;

    while (true){
        string cityN;
        double countP,priceP;
        cin>>cityN>>countP>>priceP;
        double totP=countP*priceP;

        auto it=cityProd.find(cityN);

        if(it==cityProd.end()) {
            n--;
        }

        cityProd[cityN]+=totP;

        if (n==0) {
            break;
        }
    }

    for (auto city:cityProd) {
        cout<<city.first<<' '<<city.second<<endl;
    }

    system("pause");
    return 0;
}

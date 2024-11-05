#include <iostream>
#include <map>

int main() {
    int n;
    std::cin>>n;

    std::map<int,int> times;
    for(int i=0;i<n;i++) {
        int tmp;
        std::cin>>tmp;
        times[tmp]++;
    };

    for (std::pair<int,int> curr:times) {
        if (curr.second%2==0) {
            std::cout<<curr.first<<std::endl;
            break;
        };
    };
    system("pause");
    return 0;
}
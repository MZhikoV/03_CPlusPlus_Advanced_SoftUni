#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string inp;
    std::cin>>inp;
    int count=1;
    std::string fst;

    std::vector<std::string> names;
    std::vector<std::string>::iterator it1;

    std::map<std::string,int> resources;
    
    while (inp!="stop") {
        if(count%2!=0) {
            fst=inp;
        } else {
            resources[fst]+=stoi(inp);
            it1=find(names.begin(),names.end(),fst);
            if(it1==names.end()) {
                names.push_back(fst);
            };
        }
        std::cin>>inp;
        count++;
    };

    for(std::string curr:names) {
        std::cout<<curr<<" -> "<<resources[curr]<<std::endl;
    };

    system("pause");
    return 0;
}
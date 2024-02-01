#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];

    for (size_t r=0;r<rows;r++){
        for(size_t c=0;c<cols;c++){
            cin>>arr[r][c];
        }
    }

    for(size_t c=0;c<cols;c++){
        int sum=0;
        for (size_t r=0;r<rows;r++){
            sum+=arr[r][c];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}

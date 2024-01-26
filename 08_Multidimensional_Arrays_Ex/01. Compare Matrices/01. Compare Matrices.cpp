// 01. Compare Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int readMatrix() {
    int arr1[10][10];
    string input;
    getline(cin, input);
    int row = stoi(input);

    for (size_t i = 0; i < row; i++) {
        getline(cin, input);
        istringstream inp(input);
        int j = 0;
        int temp;
        while (inp >> temp) {
            arr1[i][j] = temp;
            j++;
        }
        return arr1;
}


int main()
{
    while (true) {
        


        }
    }

}

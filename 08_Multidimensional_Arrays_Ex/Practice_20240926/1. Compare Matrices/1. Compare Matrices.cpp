#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include <sstream>
#include <array>

const int max_size = 10;

void readEl(int& row, int& col, std::array<std::array<int, max_size>, max_size>& arr) {
    std::cin >> row;
    std::cin.ignore();

    for (int r = 0; r < row; r++) {
        std::string a;
        getline(std::cin, a);
        std::stringstream str(a);

        col = 0;

        while (str >> arr[r][col]) {
            col++;
        };
    };
};

bool compareArr(int row1, int col1, std::array<std::array<int, max_size>, max_size>& arr1,
    int row2, int col2, std::array<std::array<int, max_size>, max_size>& arr2) {
    if (row1 != row2 || col1 != col2) {
        return false;
    };
    for (int r = 0; r < row1; r++) {
        for (int c = 0; c < col1; c++) {
            if (arr1[r][c] != arr2[r][c]) {
                return false;
            };
        };
    };
    return true;
};

int main()
{
    int row1=0, col1, row2, col2;

    std::array<std::array<int, max_size>, max_size> arr1;
    std::array<std::array<int, max_size>, max_size> arr2;

    readEl(row1, col1, arr1);
    readEl(row2, col2, arr2);

    std::cout << ((compareArr(row1, col1, arr1, row2, col2, arr2)) ? "equal" : "not equal") << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

char snakeLetter(queue<char>&snake) {
    char temp=snake.front();
    snake.pop();
    snake.push(temp);
    return temp;
}

int main() {

    int rows,cols;
    cin>>rows>>cols;

    vector<vector<char>>arr(rows,vector<char>(cols));
    queue<char>snake;

    string input;
    cin>>input;
    for (size_t i=0;i<input.size();i++){
        snake.push(input[i]);
    }

    bool forward=true;
    for (size_t r=0;r<rows;r++) {
        if (forward) {
            for (size_t c=0;c<cols;c++) {
                arr[r][c]=snakeLetter(snake);
            }
            forward=false;
        }
        else {
            for (size_t c=cols;c>0;c--) {
                arr[r][c-1]=snakeLetter(snake);
            }
            forward=true;
        }
    }

    for (size_t r=0;r<rows;r++) {
        for (size_t c=0;c<cols;c++) {
            cout<<arr[r][c];
        }
        cout<<endl;
    }
    return 0;
}
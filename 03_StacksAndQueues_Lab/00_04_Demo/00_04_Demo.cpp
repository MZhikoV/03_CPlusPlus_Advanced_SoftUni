// 00_04_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pQueue;
    pQueue.push(13);
    pQueue.push(69);
    pQueue.push(42);

    while (!pQueue.empty()) {
        cout << pQueue.top() << endl;
        pQueue.pop();
    }

    cout <<"================================" << endl;

    priority_queue<int, deque<int>, greater<int> > reversedQueue;
    reversedQueue.push(13);
    reversedQueue.push(69);
    reversedQueue.push(42);

    while (!reversedQueue.empty()) {
        cout << reversedQueue.top() << endl;
        reversedQueue.pop();
    }

    cout << "================================" << endl;

    priority_queue<string> stringQueue;
    stringQueue.push("Mariyan");
    stringQueue.push("Goshko");
    stringQueue.push("Peshko");
    stringQueue.push("Sasko");
    stringQueue.push("Ali Bali");

    while (!stringQueue.empty()) {
        cout << stringQueue.top() << endl;
        stringQueue.pop();
    }


    cout << "================================" << endl;

    priority_queue<string, deque<string>, greater<string> > revStringQueue;
    revStringQueue.push("Mariyan");
    revStringQueue.push("Goshko");
    revStringQueue.push("Peshko");
    revStringQueue.push("Sasko");
    revStringQueue.push("Ali Bali");

    while (!revStringQueue.empty()) {
        cout << revStringQueue.top() << endl;
        revStringQueue.pop();
    }
    return 0;
}
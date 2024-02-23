#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<char> seq;

    string input;
    cin >> input;

    for (size_t c = 0; c < input.size(); c++)
    {
        seq.push(input[c]);
    }
    int openC = 0, openR = 0, openB = 0;
    bool isBal = true;
    while (!seq.empty())
    {
        char temp = seq.front();
        switch (temp)
        {
        case '(':
            openC++;
            break;
        case '[':
            if (openC != 0)
            {
                isBal = false;
            }
            else
            {
                openR++;
            }
            break;
        case '{':
            if ((openC != 0) || (openR != 0))
            {
                isBal = false;
            }
            else
            {
                openB++;
            }
            break;
        case ')':
            if (openC != 0)
            {
                openC--;
            }
            else
            {
                isBal = false;
            }
            break;
        case ']':
            if ((openC != 0) || (openR == 0))
            {
                isBal = false;
            }
            else
            {
                openR--;
            }
            break;
        case '}':
            if ((openC != 0) || (openR != 0) || (openB == 0))
            {
                isBal = false;
            }
            else
            {
                openB--;
            }
        }
        if (!isBal) {
            break;
        }
        seq.pop();
    }

    if ((openC != 0) || (openR != 0) || (openB != 0))
        {
            isBal = false;
        }
    cout << ((isBal) ? "YES" : "NO") << endl;

    return 0;
}
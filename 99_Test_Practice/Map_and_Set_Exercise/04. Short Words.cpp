#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    set<string> words;

    string input;
    getline(cin, input);
    for (size_t c = 0; c < input.size(); c++)
    {
        input[c] = tolower(input[c]);
    }
    istringstream inp(input);
    string word;

    while (inp >> word)
    {
        if (word.size() < 5)
        {
            words.insert(word);
        }
    }
    bool isFirst = true;
    for (string elem : words)
    {
        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            cout << ", ";
        }
        cout << elem;
    }
cout << endl;
return 0;
}

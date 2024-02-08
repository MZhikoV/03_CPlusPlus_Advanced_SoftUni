#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    set<string> words;

    string text;
    getline(cin, text);
    int sizeS = text.length();
    for (size_t p = 0; p < text.length(); p++)
    {
        if (!isalpha(text[p]) && text[p] != 39 && text[p] != 32)
        {
            text.erase(text.begin() + p);
        }
    }
    istringstream inp(text);
    string word;
    while (inp >> word)
    {
        size_t posF = word.find(39);
        if (posF != string::npos)
        {
            words.insert(word.substr(0, posF));
            word.erase(0, posF+1);
            words.insert(word);
        }
        else
        {
            words.insert(word);
        }
    }

    // for (string t:words) {
    //     cout<<t<<endl;
    // }

    char symb;
    cin >> symb;

    while (symb != '.')
    {
        bool areThere = false;
        auto it1 = words.begin();
        symb=tolower(symb);
        while (it1 != words.end())
        {
            string currWord = *it1;
            for (size_t c = 0; c < currWord.length(); c++)
            {
                if ((currWord[c] == symb) || (currWord[c] == (symb - 32)))
                {
                    cout << currWord << ' ';
                    areThere = true;
                    break;
                }
            }
            it1++;
        }
        if (!areThere)
        {
            cout << "---";
        }
        cout << endl;
        cin >> symb;
    }
    system("pause");
    return 0;
}

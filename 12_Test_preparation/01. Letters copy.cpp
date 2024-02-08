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
    string singleWords;

    string text;
    getline(cin, text);
    int sizeS = text.length();
    for (size_t p = 0; p < text.length(); p++)
    {
        if (isalpha(text[p]) || text[p] == 39)
        {
            singleWords.push_back(text[p]);
        }
        else if (!singleWords.empty()) { 
            words.insert(singleWords);
            singleWords.clear();
        }
    }
    if (!singleWords.empty()) {
        words.insert(singleWords);
    }

   // cout<<text<<endl;

    // istringstream inp(text);
    // string word;
    // while (inp >> word)
    // { 
    //     words.insert(word);
    // }

    // for (string t:words) {
    //     cout<<t<<'|';
    // }

    char symb;

    while (cin>>symb && symb != '.')
    {
        bool areThere = false;
    bool isFirst=true;
        for (string w:words) {
            
            for (char chr:w) {
                if (tolower(chr) ==tolower(symb)) {
                    if (isFirst) {
                        isFirst=false;
                    }
                    else {
                        cout<<' ';
                    }
                    cout << w;
                    areThere = true;
                    break;
                }
            }
        }

        if (!areThere)
        {
            cout << "---";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}

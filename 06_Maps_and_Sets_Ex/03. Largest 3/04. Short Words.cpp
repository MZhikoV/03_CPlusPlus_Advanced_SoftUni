#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    set<string> words;
    
    string input;
    getline(cin, input);

    istringstream inp(input);

    string word;

    while (inp >> word) {
        if (word.size() < 5) {
            for (size_t i = 0; i < word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            words.insert(word);
        }
    }
    bool isFirst = true;
    for (string elem : words) {
        if (isFirst) {
            isFirst = false;
        }
        else {
            cout << ", ";
        }
        cout << elem;
    }
    cout << endl;
    return 0;    
}

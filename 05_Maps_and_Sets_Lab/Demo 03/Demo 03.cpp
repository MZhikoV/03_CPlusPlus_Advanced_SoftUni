#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    set <int> digits{ 4, 1, 2, 5, 6, 8, 7, 4, 9, 3, 5, 6 };

        for (int d : digits) {
            cout << d << ' ';
        }

        cout << endl;

        cout << endl;

        set<char>letters;

        string sentence = "the quick brown fox jumps over the lazy dog";

        istringstream inp(sentence);

        char letter;
        while (inp >> letter) {
            letters.insert(letter);
        }

        for (set<char>::iterator it1 = letters.begin(); it1 != letters.end(); it1++) {
            cout << *it1 << ' ';
        }

        cout << endl;

        return 0;
}
#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> names;
   

    string input;
    getline(cin, input);

    istringstream inp(input);

    string name;
    int namecount = 0;
    while (inp >> name) {
        names.push(name);
        namecount++;
    }

    int pass;
    cin >> pass;
    int counter = 0;

    queue<string>temp;

    while (true) {
        
        counter++;
        if (counter != pass) {
            temp.push(names.front());
            names.pop();
        }
        else if (counter == pass) {
            counter = 0;
            cout << "Removed " << names.front() << endl;
            names.pop();
            namecount--;
        }

        if (namecount == 1) {
            cout << "Last is " << names.front() << endl;
            break;
        }

        if (names.empty()) {
            while (!temp.empty()) {
                names.push(temp.front());
                temp.pop();
            }
        }
    }

    return 0;
}
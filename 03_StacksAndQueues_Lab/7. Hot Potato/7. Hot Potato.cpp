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
    
    //while(true) {
    //queue<string>temp;


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
    






   /* while (!names.empty()) {
        if (counter != pass) {
            temp.push(names.front());
            names.pop();
            counter++;
            if (names.empty()) {
                names = temp;
            }
        }
        else if (counter==)



        for (int i = 1; i <= pass; i++) {
            
            
            
            if (names.empty()) {
                names = temp;
            }
            if (names!.empty())
            temp.push(names.front());
            names.pop();
        }
        cout <<"Removed "<< names.front() << endl;
        names.pop();
    }
    cout << temp.front() << endl;*/

    return 0;
}
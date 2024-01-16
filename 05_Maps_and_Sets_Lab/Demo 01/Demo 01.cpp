#include <iostream>
#include <utility>
#include<string>

using namespace std;

int main()
{
    pair<string, string>contact{ "Goshko","someemaoi@mail.me" };
    cout << "Name: " << contact.first << " E-mail: " << contact.second << endl;

    contact.first = "Goshko Ivanov";
    contact.second = "It became a secret!";

    cout << "Name: " << contact.first << " E-mail: " << contact.second << endl;

    cout << endl;

    pair<string, pair<double, double>>location;

    location.first = "Gorichane";
    location.second.first = 123.456000;
    location.second.second = 123.987456;

    cout << "Name: " << location.first << endl;
    cout << "Coordinates:" << endl;
    cout << location.second.first << endl;
    cout<<location.second.second << endl;


    return 0;
}

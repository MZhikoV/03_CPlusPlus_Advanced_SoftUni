#include <iostream>
#include <map>
#include <string>
#include<vector>
#include <sstream>

using namespace std;

int main()
{
    map <string, vector<double>> students;

    int num;
    cin >> num;

    while (num > 0) {
        string name;
        double grade;
        cin >> name >> grade;

        students[name].push_back(grade);

        num--;
    }

    for (pair<string, vector<double>>student : students) {
        cout << student.first << " -> ";
        double sum = 0;
            int count = 0;
            cout.setf(ios::fixed);
            cout.precision(2);
        for (double gr : student.second) {
            cout << gr << ' ';
            sum += gr;
            count++;
        }
        cout << "(avg: " << sum / count << ')' << endl;
    }
    return 0;

}
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <ios>

using namespace std;

int main() {
    map<string,vector<double>> students; //using map with string key and vector values

    int num;
    cin>>num;

    while (num--) {
        string name;
        cin>>name;
        double grade;
        cin>>grade;
        //write grades in vector with key
        students[name].push_back(grade);
    }

    for (pair<string,vector<double>> student: students){
        cout<<student.first<<" -> ";

        cout.setf(ios::fixed);
        cout.precision(2);
        int count=0;
        double sumGrades=0;
        for (double grades:student.second){
            cout<<grades<<' ';
            count++;
            sumGrades+=grades;
        }
        cout<<"(avg: "<<sumGrades/count<<")"<<endl;
    }
    return 0;
}

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

	while (num --) {
		string name;
		double grade;
		cin >> name >> grade;

	//	students[name].push_back(grade);
		vector<double>& grades = students[name];
		grades.push_back(grade);
	}

	auto it1 = students.begin();

	for (; it1 != students.end(); it1++) {
		cout << it1->first << " -> ";
	
		double sum = 0;

		cout.setf(ios::fixed);
		cout.precision(2);

		vector<double>& grades = it1->second;

		for (double gr : grades) {
			cout << gr << ' ';
			sum += gr;
		}
		cout << "(avg: " << sum / grades.size() << ')' << endl;
	}
	return 0;
}
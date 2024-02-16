#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int maxlength=500;

int readData(int* buffer) {
	string input;
	getline(cin,input);

	istringstream inp(input);

	int num, index=0;

	while (inp>>num){
		buffer[index]=num;
		index++;
	}
	return index;
}

int main()
{
	
	int* buffer=new int[maxlength];

	int idx=readData(buffer);

	for (int i=0; i<idx/2;i++) {
		buffer[i]+=buffer[idx-(i+1)];
	}

	for (int i=0; i<idx/2;i++) {
			cout<<buffer[i]<<' ';
		}

	if (idx%2!=0) {
		cout<<buffer[(idx-1)/2];
	}
	cout<<endl;
	delete[] buffer;
	cin.get();
	return 0;	
}
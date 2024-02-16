#include <iostream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

const int maxlength=500;

int readData(const unique_ptr<int[]> & buffer) {
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

void swapNum(const unique_ptr<int[]> & ptr, const int &i1, const int &i2) {
	int temp=ptr[i1];
	ptr[i1]=ptr[i2];
	ptr[i2]=temp;
}



int removeNumbers(const unique_ptr<int []> & ptr, const int &n, bool (*predicate) (const int&)){
	int removedCount=0;
	for (int i=0; i<n;i++) {
		if (predicate(ptr[i])){
			removedCount++;
			ptr[i]=0;
		}
		else if (removedCount>0) {
			swapNum(ptr,i, i-removedCount);
		}
	}
	return removedCount;
}

bool isNegative(const int & number) {
	return number<0;
}

void reverse(const unique_ptr<int[]> & ptr, const int &n){
	for (int i=0; i<n/2;i++){
		swapNum(ptr,i, n-(i+1));
	}
}

int main()
{
	unique_ptr<int[]> buffer=make_unique<int[]>(maxlength);

	int idx=readData(buffer);

	idx-=removeNumbers(buffer, idx,isNegative);

	if (idx==0) {
		cout<<"empty"<<endl;
	}
	else {
		reverse(buffer,idx);
		for (int i=0;i<idx;i++) {
			cout<<buffer[i]<<' ';
		}
		cout<<endl;
	}



cin.get();
return 0;
}
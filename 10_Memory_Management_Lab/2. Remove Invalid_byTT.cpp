#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;


int main() {

// Using the following bit pattern |next|id|name|

char* dataStart=NULL,* dataEnd=NULL;

string inputLine;
while (getline(cin,inputLine) && inputLine!="end") {
	istringstream ss(inputLine);

	int id;
	string name;
	ss>>id>>name;

	size_t requiredSize= sizeof(char*)+ sizeof (int)+(name.length()+1);
	char* currentBlockPtr=new char[requiredSize];

	if (!dataStart) {
		dataStart=currentBlockPtr;
	}
	else {
		char** prevToCurrentPtr=reinterpret_cast<char**>(dataEnd);
		*prevToCurrentPtr=currentBlockPtr;
	}

	//set next to NULL
	char** nextPtr=reinterpret_cast<char**>(currentBlockPtr);
	*nextPtr=NULL;

	//set id
	int* idPtr=reinterpret_cast<int*>(currentBlockPtr+sizeof(char*));
	*idPtr=id;

	//set name
	char* namePtr=currentBlockPtr+sizeof(char*)+sizeof(int);
	copy(name.begin(), name.end(),namePtr);
	namePtr[name.length()]=NULL;

	dataEnd=currentBlockPtr;

}

char * iter=dataStart;
while(iter) {
	char** nextPtr=reinterpret_cast<char**>(iter);
	char * next=*nextPtr;

	int * idPtr=reinterpret_cast<int*>(iter+sizeof(char*));
	int id=*idPtr;

	if (id>=0){
		char *name=iter+sizeof(char*)+sizeof(int);
		cout<<id<<' '<<name<<endl;
	}
	delete iter;
	iter=next;
}


cin.get();
}
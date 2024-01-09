// 00_01_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

//vector function for reading a vector values from the console
vector<string> readInput() {
	vector<string>words;
	string input;

	getline(cin, input);

	istringstream istr(input);

	string word;

	while (istr >> word) {
		words.push_back(word);
	}

	return words;
}

//function for defining a stack and printing the words in reverse order
void printWordsReversed(const vector<string>& words) {
	stack<string>reversedWords;

	for (const string word : words) {
		reversedWords.push(word);
	}

	while (!reversedWords.empty()) {
		cout << reversedWords.top() << ' ';
		reversedWords.pop();
	}
	cout << endl;
}


int main()
{
	const vector<string> words = readInput();

	printWordsReversed(words);

	return 0;
}
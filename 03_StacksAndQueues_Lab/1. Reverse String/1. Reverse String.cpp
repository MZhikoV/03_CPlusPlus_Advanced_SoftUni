#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

//vector function for reading a vector values from the console
array<string> readInput() {

	array<string>words;
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
void printWordsReversed(const array<string>& words) {
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

//function for reversing the letters in a string
array <string> revChars(array<string>& words) {
	stack<char>revCharStack;
	array<string>revCharV;
	

	for (string word : words) {
		string reversed{};
		for (int i = 0; i < word.length(); i++) {
			revCharStack.push(word[i]);
		}

		while (!revCharStack.empty()) {
			reversed += revCharStack.top();
			revCharStack.pop();
		}

		revCharV.push_back(reversed);
	}
	return revCharV;
}

int main()
{
	array<string> words = readInput();

	words = revChars(words);

	printWordsReversed(words);

	return 0;
}
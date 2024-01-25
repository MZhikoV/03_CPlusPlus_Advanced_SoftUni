#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows>> cols;
	
	//defining vector for 2D array
	vector<vector<int>> matrix;
	
	//defining vector for results with size=columns number
	vector<int> results;
	results.resize(cols);

	//resizing the vector, so it can have elements same number as rows
	matrix.resize(rows);

	for (size_t r = 0; r < rows; r++) {
		matrix[r].resize(cols); //resize each vector/rox so it can fit with the number of columns
		for (size_t c = 0; c < cols; c++) {
			cin >> matrix[r][c];
			results[c] += matrix[r][c];
		}
	}

	//printing the results on th console
	for (int sum : results) {
		cout << sum << endl;
	}
	return 0;
}
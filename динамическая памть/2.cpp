#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
	srand(time(nullptr));

	int rows;
	int columns;
	cin >> rows;
	cin >> columns;
	int **matrix = new int *[rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[columns];
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			matrix[i][j] = rand() % 10;
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << "Елементи головної діагоналі: ";
	for (int i = 0; i < rows; ++i) {
		cout << matrix[i][i] << " ";
	}

	cout << endl << "Eлементи побічної діагоналі: ";
	for (int i = 0; i < rows; ++i) {
		cout << matrix[i][rows - 1 - i] << " ";
	}

	cout << endl;
	int even = 0;
	int odd = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			if (matrix[i][j] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
		}
	}

	cout << "Парні: " << even<<endl;
	cout << "Непарні: " << odd;

	for (int i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
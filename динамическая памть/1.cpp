#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(nullptr));
	int size;
	cin >> size;
	float *array = new float[size];
	for (int i = 0; i < size; ++i) {
		array[i] = static_cast<float>(rand()) / (RAND_MAX / 4) - 2;
		cout << array[i]<<endl;
	}
	
	int negative = 0;
	int positive = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] > 0) {
			positive++;
		}
		else {
			negative++;
		}
	}
	cout << endl << "Негативні: " << negative << endl;
	cout << "Позитивні: " << positive<<endl;
	delete[] array;
}
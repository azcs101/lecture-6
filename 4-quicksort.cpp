#include <iostream>

void swap(int * array, int i, int j) {
	int tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
}


void quicksort(int *array, int low, int high) {
}

int main() {

	int array[] = { 11, 75, 3, 1, 5, 10 };
	quicksort(array, 0, 5);

	for (int i = 0; i < 6; ++i) {
		std::cout << array[i] << "\n";
	}

	return 0;
}

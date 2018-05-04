#include <iostream>

void swap(int * array, int i, int j) {
	int tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
}

void bubblesort(int *array, int length) {

}

int main() {

	int array[] = { 5, 1, 4, 2, 8 };
	bubblesort(array, 5);

	for (int i = 0; i < 5; ++i) {
		std::cout << array[i] << "\n";
	}

	return 0;
}

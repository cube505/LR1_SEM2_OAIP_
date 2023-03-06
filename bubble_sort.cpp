#include "bubble_sort.h"


void bubble_sort(int* arr, int size)
{
	int temp = 0;
	bool exit = false;
	while (!exit) {
		exit = true;
		for (int i = 0; i < (size - 1); i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				exit = false;
			}
		}
	}
	std::cout << "Отсортированный массив: \n";
	print_array(arr, size);
}

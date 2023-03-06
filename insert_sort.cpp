#include "insert_sort.h"

void insert_sort(int* arr, int size)
{
	int i, j;
	for (i = 1; i < size; i++) {
		j = i;
		while (j > 0 and arr[j] < arr[j - 1]) {
			std::swap(arr[j], arr[j-1]);
			j--;
		}
	}
	std::cout << "Отсортированный массив: \n";
	print_array(arr, size);
}

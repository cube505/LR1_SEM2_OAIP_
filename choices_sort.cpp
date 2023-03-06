#include "choices_sort.h"

void choices_sort(int* arr, int size)
{
	int i, j, maxj;
	for (i = 0; i < size - 1; i++) {
		maxj = i;
		for (j = i + 1; j < size; j++) {
			if (arr[j] > arr[maxj]) {
				maxj = j;
			}	
		}
		std::swap(arr[i], arr[maxj]);
	}
	std::cout << "Отсортированный массив: \n";
	print_array(arr, size);
}

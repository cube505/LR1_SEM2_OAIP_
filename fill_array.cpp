#include "fill_array.h"

void fill_array(int* arr, int size)
{
	
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

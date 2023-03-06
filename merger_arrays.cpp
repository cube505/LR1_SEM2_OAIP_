#include "merger_arrays.h"

void merger_arrays(int* arrA, int* arrB, int* arrC, int sizeA, int sizeB)
{
	int i = 0, j = 0, k = 0;
	while(i<sizeA){
		arrC[k] = arrA[i];
		i++;
		k++;
	}
	while (j < sizeB) {
		arrC[k] = arrB[j];
		j++;
		k++;
	}
	std::cout << "Массив С: \n";
	print_array(arrC, sizeA+sizeB);
}

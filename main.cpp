#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "fill_array.h"
#include "print_array.h"
#include "check_input.h"
#include "bubble_sort.h"
#include "choices_sort.h"
#include "merger_arrays.h"
#include "insert_sort.h"


int main()
{
    setlocale(LC_ALL, "rus");

    //Задаем размер массивов А и В
    int sizeA, sizeB;
    do {
        std::cout << "Введите размер массива А: ";
        std::cin >> sizeA;
    }
    while(!check_input(&sizeA));
    do {
        std::cout << "Введите размер массива B: ";
        std::cin >> sizeB;
    } while (!check_input(&sizeB));

    //Выделяем память под массивы А, В и С
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];
    int* arrC = new int[sizeA+sizeB];


    //Заполняем значение массивов А и В
    srand(time(NULL));
    fill_array(arrA, sizeA);
    fill_array(arrB, sizeB);

    //Выводим значение массивов А и В
    print_array(arrA, sizeA);
    print_array(arrB, sizeB);

    //отсортировываем массивы А и В
    bubble_sort(arrA, sizeA);
    choices_sort(arrB, sizeB);

    //Получаем массив С и отсортировываем его
    merger_arrays(arrA, arrB, arrC, sizeA, sizeB);
    insert_sort(arrC, sizeA + sizeB);
    

    //Освобождение памяти, занятой под массивы А, В и С
    delete[] arrA;
    delete[] arrB;
    delete[] arrC;
    return 0;
}

// SortLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Sort.h"

// TODO: Это пример библиотечной функции.
void Sort(int* array, int size, bool ascending) {
    if (array == nullptr || size <= 0) {
        return;
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            bool shouldSwap = ascending ?
                (array[j] > array[j + 1]) :
                (array[j] < array[j + 1]);

            if (shouldSwap) {
                // Обмен элементов
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
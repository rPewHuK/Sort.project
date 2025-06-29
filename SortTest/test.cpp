#include "pch.h"
#include <algorithm> // для std::sort
#include <vector>
#include "Sort.h"
#include "SortLib.cpp"

TEST(SortTest, AscendingSort) {
    int arr[] = { 5, 3, 8, 1, 2 };
    const int size = sizeof(arr) / sizeof(arr[0]);
    int expected[] = { 1, 2, 3, 5, 8 };

    Sort(arr, size, true);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(SortTest, DescendingSort) {
    int arr[] = { 5, 3, 8, 1, 2 };
    const int size = sizeof(arr) / sizeof(arr[0]);
    int expected[] = { 8, 5, 3, 2, 1 };

    Sort(arr, size, false);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(SortTest, EmptyArray) {
    int* arr = nullptr;
    Sort(arr, 0, true); // Не должно вызывать ошибок
}

TEST(SortTest, SingleElement) {
    int arr[] = { 42 };
    Sort(arr, 1, true);
    EXPECT_EQ(arr[0], 42);
}

TEST(SortTest, AlreadySorted) {
    int arr[] = { 1, 2, 3, 4, 5 };
    const int size = sizeof(arr) / sizeof(arr[0]);
    int expected[] = { 1, 2, 3, 4, 5 };
}
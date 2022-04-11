#pragma once
#include <stdarg.h>
#include <stdlib.h>

class Sort
{
    int len;
    int* list;
    // add data members

public:

    // 1
    Sort(int n, int min, int max);

    // 2

    // 3
    Sort(int* vec, int n);

    // 4
    Sort(int n, ...);

    // 5


    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};
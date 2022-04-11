#include "Sort.h"
#include <iostream>
#include <algorithm>
Sort::Sort(int n, int min, int max)
{
	this->len = n;
	this->list = (int*)malloc(n);
	for (int i = 0; i < n; i++) {
		this->list[i] = rand() % (max - min + 1) + min;
	}
}

Sort::Sort(int* vec, int n): list(vec), len(n)
{
}

Sort::Sort(int n, ...)
{
	this->len = n;
	this->list = (int*)malloc(n);
	va_list vl;
	va_start(vl, n);

	for (int i = 0; i < n; i++) {
		this->list[i] = va_arg(vl, int);
	}
	va_end(vl);
}

void Sort::InsertSort(bool ascendent)
{
	std::sort(this->list, this->list + len);
}

void Sort::QuickSort(bool ascendent)
{
	std::sort(this->list, this->list + len);
}

void Sort::BubbleSort(bool ascendent)
{
	std::sort(this->list, this->list + len);
}

void Sort::Print()
{
	for (int i = 0; i < len; i++) {
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}

int Sort::GetElementsCount()
{
	return len;
}

int Sort::GetElementFromIndex(int index)
{
	return list[index];
}

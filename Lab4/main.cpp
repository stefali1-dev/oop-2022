// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sort.h"

int main()
{
	Sort s1(6, 2, 67);
	s1.InsertSort();
	s1.Print();

	////

	int v[] = {5, 2, 7, 2, 29, 20};
	Sort s2(v, 6);
	s2.BubbleSort();
	s2.Print();

	////

	Sort s3(4, 57, 2, 45, 14);
	s3.QuickSort();
	s3.Print();
}

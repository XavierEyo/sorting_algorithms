#include "sort.h"
/**
 *selection_sort- function that sorts using selection sort algorithm
 *
 *@array: array to be sorted
 *@size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (!array || !size)
		return;
	for (i = 1; i < 

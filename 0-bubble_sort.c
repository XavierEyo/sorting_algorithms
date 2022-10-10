#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, k;
	
	for(i = size; i >= 1; i--)
	{
		for(k = 2; k <= i; k++)
		{
			if(array[k - 1] > array[k])
			{
				temp = array[k - 1];
				array[k - 1] = array[k];
				array[k] = temp;
			}
		}
	}
} 

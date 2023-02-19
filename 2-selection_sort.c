#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: array of ints
 * @size: array size
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i, j, minIdx;

	for (i = 0; i < (int)size - 1; i++)
	{
		minIdx = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[minIdx])
				minIdx = j;
		}
		if (minIdx != i)
		{
			swapArray(&array[minIdx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swapArray - swaps two elements of an array
 *
 * @x: first elements
 * @y:  second element
 *
 * Return: void
 */
void swapArray(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

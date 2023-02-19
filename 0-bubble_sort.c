#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array
 * @size: Size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, swapped = 0;

	for (i = 0; i < (int)size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < (int)size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapArray(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
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

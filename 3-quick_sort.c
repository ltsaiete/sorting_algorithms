#include "sort.h"

/**
 * partition - partitions an array
 *
 * @low: initial index
 * @high: final index
 * @array: array of ints
 * @size: array size
 *
 * Return: void
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swapArray(&array[i], &array[j]);
		}
	}

	swapArray(&array[i + 1], &array[high]);

	print_array(array, size);
	return (i + 1);
}

/**
 * quickSort - sorts a sub-array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @low: initial index
 * @high: final index
 * @array: array of ints
 * @size: array size
 *
 * Return: void
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array of ints
 * @size: array size
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
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

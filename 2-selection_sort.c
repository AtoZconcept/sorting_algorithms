#include "sort.h"

/**
 * swap - A function that swaps two intergers in an array
 * @array: The array to swap from
 * @min: The minimun integer in our array
 * @index: The index of the array
 */

void swap(int *array, unsigned int index, unsigned int min)
{
	int tmp;

	tmp = array[index];
	array[index] = array[min];
	array[min] = tmp;
}

/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
	if (min != i)
	{
		swap(array, i, min);
		print_array(array, size);
	}
}
}

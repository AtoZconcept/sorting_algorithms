#include "sort.h"

/**
 * pivot_partition - A function that partitions an array
 * @array: the array to partition
 * @left: the left partition
 * @right: the right partition
 * Return: 0
 */

int pivot_partition(int *array, int left, int right)
{
	int pivot, i, j, tmp;

	i = left - 1;
	pivot = array[right];

	for (j = left; j <= right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	i++;
	tmp = array[i];
	array[i] = array[right];
	array[right] = tmp;
	return (i);
}

/**
 * call_partition - A function that resorts the left and right partitions
 * @array: the array to sort
 * @left: the left partition
 * @right: the right partition
 */

void call_partition(int *array, int left, int right)
{
	int pivot;

	if (right <= left)
		return;

	pivot = pivot_partition(array, left, right);
	call_partition(array, left, pivot - 1);
	call_partition(array, pivot + 1, right);
}
/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	int left, right;

	if (array == NULL || size < 2)
		return;

	left = 0;
	right = size - 1;

	call_partition(array, left, right);
}

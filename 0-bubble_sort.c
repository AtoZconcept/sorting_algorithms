#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: The array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	size_t s = size;
	int temp, save;

	if (size < 2)
		return;

	do {

	save = 0;
	for (i = 0; i < (s - 1); i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp
			save = 1;
			print_array(array, size);
		}

	}
	} while (save);
}

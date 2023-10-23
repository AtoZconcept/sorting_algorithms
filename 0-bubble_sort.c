#include "sort.h"

/**
 * bubble_sort - unction that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: The array to sort
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, s = size;
	int temp, save;

	do {
		save = 0;
		for (i = 1; i < s; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				save = i;
				print_array(array, size);
			}
		}
		s = save;
	} while (save);
}

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
    unsigned int i, s = size;
    int temp;

    do{
        for (i = 0; i < s; i++)
        {
            if (array[i] < array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp
                print_array(array, size);
            }

        }
    } while (s >= 1);
}
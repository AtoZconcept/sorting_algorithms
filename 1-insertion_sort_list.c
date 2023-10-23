#include "sort.h"

/*
 * insertion_sort_list - Function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: the list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *next, *current_sort, *sort = NULL;
	listint_t *current = *list;

	while (current != NULL)
	{
		next = current->next;
		if (sort == NULL || sort->n >= current->n)
		{
			current->next = sort;
			if (sort != NULL)
				sort->prev = current;
			current->prev = NULL;
			sort = current;
		}
		else
		{
			current_sort = sort;
			while (current_sort->next != NULL && current_sort->next->n < current->n)
			{
				current_sort = current_sort->next;
			}
			current->next = current_sort->next;
			if (current_sort->next != NULL)
			{
				current_sort->next->prev = current;
			}
			current->prev = current_sort;
			current_sort->next = current;
		}
		current = next;
		*list = sort;
	}
}

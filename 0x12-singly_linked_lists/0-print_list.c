#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h : head
 *
 * Return: number of elements of list
 */

size_t print_list(const list_t *h)
{
	size_t NBR;

	for (NBR = 0; h != NULL; NBR++)
	{
	
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (NBR);
}

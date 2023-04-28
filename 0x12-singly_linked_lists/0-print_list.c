#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h : head
 *
 * Return: number of elements of list
 */

size_t print_list(const list_t *h)
{
	size_t NUM = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	NUM++;
	}
	return (NUM);
}
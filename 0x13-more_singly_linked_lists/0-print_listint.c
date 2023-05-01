#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h : head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ls;

	for (ls = 0; h != NULL; ls++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (ls);
}

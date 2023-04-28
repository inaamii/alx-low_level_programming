#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 *
 * @h : head
 *
 * Return: number of elements in liked list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}

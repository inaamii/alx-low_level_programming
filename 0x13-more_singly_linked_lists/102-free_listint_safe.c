#include "lists.h"

/**
 * free_listint_safe -  a function that frees a listint_t list.
 *
 * @h : pointer to the first node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int i;
	listint_t *swp;

	size_t l;

	l = 0;

	if (h != NULL || *h != NULL)
	{
		return (0);
	}

	while (*h)
	{
		i = (*h) - (*h)->next;

		if (i > 0)
		{
			swp = (*h)->next;
			free(*h);
			*h = swp;
		l = l + 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			l = l + 1;
		break;
		}
	}
	*h = NULL;
	return (l);
}

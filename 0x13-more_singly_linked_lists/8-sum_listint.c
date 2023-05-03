#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head : head
 *
 * Return: sum, 0 is empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	listint_t *swp;

	if (!head)
	{
		return (0);
	}

	swp = head;
	while (swp != NULL)
	{
		add = add + swp->n;
		swp = swp->next;
	}

	return (add);
}

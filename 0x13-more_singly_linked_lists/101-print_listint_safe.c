#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 *
 * @head : head
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{

	size_t i = 0;
	size_t new = 0;
	const listint_t *swp = NULL;
	const listint_t *ls = NULL;

	swp = head;
	while (swp != NULL)
	{
		printf("[%p] %d\n", (void *)swp, swp->n);
		i++;

		swp = swp->next;

		ls = head;
		for (new = 0; new < i; new++)
		{
			if (swp == ls)
			{
				printf("-> [%p] %d\n", (void *)swp, swp->n);
				return (i);
			}
			ls = ls->next;
		}
		if (!head)
			exit(98);
	}
	return (i);

}

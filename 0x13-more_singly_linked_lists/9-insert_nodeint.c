#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 *
 * @head : head
 * @idx : the index of the list where the new node should be added.
 * @n : data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *swp = *head;
	listint_t *nu;

	nu = malloc(sizeof(listint_t));

	if (nu == NULL || head == NULL)
	{
		return (NULL);
	}

	nu->n = n;
	nu->next = NULL;

	if (!idx)
	{
		nu->next = *head;
		*head = nu;
	return (nu);
	}

	i = 0;
	while (swp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			nu->next = swp->next;
			swp->next = nu;
		return (nu);
		}
		else
		{
			swp = swp->next;
		}
	i++;
	}

	return (NULL);

}

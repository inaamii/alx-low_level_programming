#include "lists.h"

/**
 * add_nodeint_end - a functin that adds a now node
 * at theend of a listint_t list.
 *
 * @head : pointer to pointer to the first element in the list.
 * @n : number
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *swp = *head;
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (!add)
	{
		return (NULL);
	}

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
	return (add);
	}

	while (swp->next != NULL)
	{
		swp = swp->next;
	}

	swp->next = add;

	return (add);
}

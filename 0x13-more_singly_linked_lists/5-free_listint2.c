#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head : head of listint_t
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *swp;

	if (head == NULL)
	{
		return;
	}


	while (*head != NULL)
	{
		swp = (*head)->next;
		free(*head);

		*head = swp;
	}

	*head = NULL;

}

#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 *
 * @head : head
 *
 * Return: the head node’s data (n), 0 is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *swp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	swp = (*head)->next;

	free(*head);

	*head = swp;

	return (n);
}

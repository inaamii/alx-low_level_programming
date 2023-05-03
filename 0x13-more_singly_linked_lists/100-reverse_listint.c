#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head : head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *r;
	listint_t *next;

	r = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = next;
	}
	*head = r;

	return (*head);
}

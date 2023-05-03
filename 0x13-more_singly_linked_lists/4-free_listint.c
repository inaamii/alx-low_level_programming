#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *swp = head;

	while (swp != NULL)
	{
		swp = swp->next;
		free(head);

		head = swp;
	}


}

#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head : list taht freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *swp;

	while (head)
	{
		swp = head->next;
		free(head->str);
		free(head);
		head = swp;
	}
}

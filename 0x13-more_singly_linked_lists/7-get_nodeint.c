#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth
 * node of a listint_t linked list.
 *
 * @head : head
 * @index : index of the node
 *
 * Return: node of listint_t, if the node does
 * not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *swp;

	swp = head;
	while (swp != NULL && i < index)
	{
		swp = swp->next;
	i++;
	}

	return (swp ? swp : NULL);
}

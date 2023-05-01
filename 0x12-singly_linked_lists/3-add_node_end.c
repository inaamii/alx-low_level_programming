#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 *
 * @head : pointer to pointer to list
 * @str : string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ane;
	list_t *swp = *head;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
	;

	ane = malloc(sizeof(list_t));

	if (!ane)
	{
		return (NULL);
	}

	ane->str = strdup(str);
	ane->len = len;
	ane->next = NULL;

	if (*head == NULL)
	{
		*head = ane;
	return (ane);
	}

	while  (swp->next)
	{
		swp = swp->next;
	}
	swp->next = ane;

	return (ane);
}

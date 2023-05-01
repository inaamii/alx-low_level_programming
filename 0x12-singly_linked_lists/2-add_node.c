#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list
 *
 * @head : pointer to pointer to list
 * @str : string
 *
 * Return: address of element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t l;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);

	l = 0;
	while (str[l])
	{
		l++;
	}

	new->len = l;
	new->next = *head;
	*head = new;

	return (*head);
}

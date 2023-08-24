#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: insert value
 * @str: insert value
 *
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ls, *list;
	unsigned int x = 0;

	if (str == NULL)
		return (NULL);

	ls = malloc(sizeof(list_t));
	if (ls == NULL)
		return (NULL);

	ls->str = strdup(str);
	if (ls->str == NULL)
	{
		free(ls);
		return (NULL);
	}
	while (str[x])
		x++;
	ls->len = x;
	ls->next = NULL;

	if (*head == NULL)
	{
		*head = ls;
		return (ls);
	}

	list = *head;
	while (list->next)
		list = list->next;
	list->next = ls;
	return (ls);
}

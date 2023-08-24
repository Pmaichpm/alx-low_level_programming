#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: current poition
 * @str: new string to add
 *
 * Return: void
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ls;
	unsigned int x = 0;

	while (str[x])
		x++;

	ls = malloc(sizeof(list_t));
	if (!ls)
		return (NULL);

	ls->str = strdup(str);
	ls->len = x;
	ls->next = (*head);
	(*head) = ls;

	return (*head);

}

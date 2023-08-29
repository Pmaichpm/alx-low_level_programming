#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first element pointer
 * @n: insert int
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *point;

	nnode = malloc(sizeof(listint_t));
	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnod->next = NULL;

	if (*head == NULL)
	{
		*head = nnod;
		return (nnod);
	}

	while (point->next)
		point = point->next;

	point->next = nnod;

	return (nnod);
}

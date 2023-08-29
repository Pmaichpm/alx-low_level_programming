#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to first node on the list
 * @idx: node addition index
 * @n: content of the inserted node
 *
 * Return: pointer to head of list or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *point, *nnode;

	point = *head;
	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = point;
		*head = nnode;
		return (*head);
	}
	while (idx > 1)
	{
		point = point->next;
		idx--;
		if (!point)
		{
			free(nnode);
			return (NULL);
		}
	}
	nnode->next = point->next;
	point->next = nnode;
	return (nnode);
}

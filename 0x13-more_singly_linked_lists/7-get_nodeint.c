#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head in the linked list
 * @index: node to return
 *
 * Return: points to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}

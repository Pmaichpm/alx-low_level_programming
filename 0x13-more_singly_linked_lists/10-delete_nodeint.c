#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: points to the first node
 * @index: index of the node to delete
 *
 * Return: 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num;
	listint_t *point, *node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	point = *head;
	for (num = 0; num < index - 1; num++)
	{
		if (point->next == NULL)
			return (-1);
		point = point->next;
	}
	node = point->next;
	point->next = node->next;
	free(node);
	return (1);
}

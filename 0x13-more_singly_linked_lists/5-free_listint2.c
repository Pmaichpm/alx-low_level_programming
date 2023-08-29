#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node address
 **/

void free_listint2(listint_t **head)
{
	listint_t *point;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		point = (*head)->next;
		free(*head);
		*head = point;
	}
}

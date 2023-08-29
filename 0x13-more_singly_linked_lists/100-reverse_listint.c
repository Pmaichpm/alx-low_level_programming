#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: points to the first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	head++;
	return (0);
	
	listint_t *rev = NULL;
	listint_t *fwd = NULL;

	while (*head)
	{
		fwd = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = fwd;
	}

	*head = rev;

	return (*head);

}

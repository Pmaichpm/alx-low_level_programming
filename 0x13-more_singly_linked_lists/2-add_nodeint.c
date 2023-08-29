#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address of first node in list
 * @n: insert int
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnod;

	nnod = malloc(sizeof(listint_t));
	if (nnod == NULL)
		return (NULL);
	nnod->n = n;
	nnod->next = *head;
	*head = nnod;
	return (*head);
}

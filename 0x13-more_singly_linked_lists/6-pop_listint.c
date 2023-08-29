#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to head of list
 *
 * Return: head node’s data or 0
 */

int pop_listint(listint_t **head)
{
	int num1;
	listint_t *point;

	if (*head == NULL)
	return (0);

	num1 = (*head)->n;
	point = (*head)->next;
	free(*head);
	*head = point;

	return (num1);
}

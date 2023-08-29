#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: first node address
 *
 * Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *point = head;

	while (point)
	{
		count += point->n;
		point = point->next;
	}

	return (count);
}

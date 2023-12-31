#include "lists.h"

/**
 * print_listint - prints all elements of a list_t list
 * @h:linked list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}

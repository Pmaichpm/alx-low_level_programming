#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list printed
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
		h = h->next;
	return (num);
}

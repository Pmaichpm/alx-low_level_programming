#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: count
 */

size_t list_len(const list_t *h)
{
	int n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}

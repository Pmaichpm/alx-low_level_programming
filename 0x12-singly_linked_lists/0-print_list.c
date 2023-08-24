#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: insert value
 *
 * Return: count nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}

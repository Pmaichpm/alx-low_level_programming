#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: address of first node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t digit = 0;
	long int lng;

	while (head)
	{
		lng = head - head->next;
		digit++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (lng > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (digit);
}

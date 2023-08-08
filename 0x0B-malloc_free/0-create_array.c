#include "main.h"

/**
 * create_array - creates array of chars and initializes with specific char
 * @size: insert value
 * @c: insert value
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int n;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		ch[n] = c;
		n++;
	}
	return (ch);
}

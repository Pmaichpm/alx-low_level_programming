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
	if (n == 0 || ch == NULL)
	return (NULL);

	if (n = 0; n < size; n++)
		ch[n] = c;
	}
	return (ch);
}

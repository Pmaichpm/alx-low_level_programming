#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: insert value
 *
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *strcp;
	unsigned int x, z;

	x = 0;
	z = 0;

	if (str == NULL)
		return (NULL);

	while (str[z])
		z++;

	strcp = malloc(sizeof(char) * (z + 1));

	if (strcp == NULL)
		return (NULL);

	while ((strcp[x] = str[x]) != '\0')
		x++;

	return (strcp);
}

#include "mai.h"
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

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	strout = (char *)malloc(sizeof(char) * (x + 1));

	if (strcp == NULL)
		return (NULL);

	for (z = 0; z <= x; z++)
		strcp[z] = str[z];

	return (strcp);
}

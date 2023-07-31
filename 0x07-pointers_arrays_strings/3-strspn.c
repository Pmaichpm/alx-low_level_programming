#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: insert value
 * @accept: insert value
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int z;
	unsigned int i;

		i = 0;

		for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0' && accept[z] != s[x]; z++)
			;
		if (s[x] == accept[z])
			i++;
		if (accept[z] == '\0')
			return (i);
	}
	return (i);
}

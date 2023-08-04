#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: insert value
 * @accept: insert value
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	int n;
	char *a = accept;

	while (*s)
	{
		for (n = 0; a[n]; n++)
		{
			if (*s == a[n])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

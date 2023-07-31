#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: insert value
 * @c: insert value
 *
 * Return: returns pointer to the first occurrence of s,c or null
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0' ; n++)
	{
		if (s[n] == c)
		return (&s[n]);
	}
	return (null);
}

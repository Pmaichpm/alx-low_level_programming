#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: insert value
 * @needle: insert value
 *
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *z = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (x);
		}
		needle = z;
		x++;
		haystack = x;
	}
	return (0);
}

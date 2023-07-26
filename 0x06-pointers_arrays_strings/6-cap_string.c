#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 * Return: void
 */
char *cap_string(char *n)
{
	int x;

	x = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (x = 0; n[x] != '\0'; x++)
	{
		switch (n[x])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[x + 1] > 96 && n[x + 1] < 123)
				{
					n[x + 1] = n[x + 1] - 32;
				}
		}
	}
	return (n);
}

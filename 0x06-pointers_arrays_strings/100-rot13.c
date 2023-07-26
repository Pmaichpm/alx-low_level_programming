#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: inputs value
 *
 * Return: void
 */
char *rot13(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
	 ((n[i] >= 'a' && n[i] <= 'z') ||
	  (n[i] >= 'A' && n[i] <= 'Z'));
	 i++;
	}
		if
		{	((n[i] >= 'a' && n[i] <= 'm') ||
			(n[i] >= 'A' && n[i] <= 'M'))
			{
				n[i] += 13;
				i++;
			}
		}
		else
			n[i] -= 13;
			i++;
		}
		i++;
	}
	return (n);
}

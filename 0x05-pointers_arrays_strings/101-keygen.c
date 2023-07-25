#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: void
 */

int main(void)
{
	int x[100];
	int i, z, n;

	z = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		x[i] = rand() % 78;
		z += (x[i] + '0');
		putchar(x[i] + '0');
		if ((2772 - z) - '0' < 78)
		{
			n = 2772 - z - '0';
			z += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

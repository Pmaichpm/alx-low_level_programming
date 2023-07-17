#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	putchar(z);

	putchar('\n');

	return (0);
}

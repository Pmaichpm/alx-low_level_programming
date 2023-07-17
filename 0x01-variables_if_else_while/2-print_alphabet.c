#include <stdio.h>
/**
 * main - print alphabet in lowercase using putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('/n');

	return (0);
}

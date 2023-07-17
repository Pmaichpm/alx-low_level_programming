#include <stdio.h>

/**
 * main - print alphabet in lowercase then uppercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
char x;

for (x = 'a' ; x <= 'z' ; x++)
{
putchar(x);
}
for (x = 'A' ; x <= 'Z' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}

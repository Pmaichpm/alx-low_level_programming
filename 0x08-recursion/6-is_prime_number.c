#include "main.h"

int defined_prime_number(int x, int y);

/**
 * is_prime_number - initial function
 * @n: insert value
 *
 *Return: void
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (defined_prime_number(n, n - 1));
}
/**
 * defined_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @x: insert value
 * @y: insert value
 *
 * Return: value
 */
int defined_prime_number(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (defined_prime_number(x, y - 1));
}

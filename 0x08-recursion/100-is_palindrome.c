#include "main.h"

int check_palindrome(char *x, int y, int z);
int get_strlen_recuxn(char *s);

/**
 * is_palindrome - initial function
 * @s: insert value
 * Return: 1 true, 0 false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, get_strlen_recuxn(s)));
}
/**
 * get_strlen_recuxn - returns string length
 * @s: input value
 * Return: void
 */
int get_strlen_recuxn(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_strlen_recuxn(s + 1));
}
/**
 * check_palindrome - checks string
 * @x: insert value
 * @y: insert value
 * @z: inser value
 * Return: 1 true, 0 false
 */
int check_palindrome(char *x, int y, int z)
{
	if (*(x + y) != *(x + z - 1))
	return (0);
	if (y >= z)
	return (1);
	return (check_palindrome(z, y + 1, z - 1));
}

#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: insert value
 * @argv: insert value
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int arg0, arg1;
	char x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

arg0 = atoi(argv[1]);
x = argv[2];
arg1 = atoi(argv[3]);

if (get_op_func(op) == NULL || x[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*x == '/' && agr1 == 0) || (*x == '%' && agr1 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(agr0, agr1));
return (0);
}

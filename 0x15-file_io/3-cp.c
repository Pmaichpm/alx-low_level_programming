#include"main.h"

/**
 * main - copies the content of a file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int acc, wr, rd, m, n;
	char bsz[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	acc = open(argv[1], O_RDONLY);
	if (acc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(acc, bsz, BUFFER)) > 0)
	{
		if (wr < 0 || write(wr, bsz, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(acc);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(acc);
	y = close(wr);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", acc);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wr);
		exit(100);
	}
	return (0);
}

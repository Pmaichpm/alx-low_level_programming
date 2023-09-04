#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	rd = read(op, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wrt = write(STDOUT_FILENO, buffer, rd);
	if (wrt == -1 || rd != wrt)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);
	return (wrt);
}

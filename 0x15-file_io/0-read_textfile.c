#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters
 * Return: actual number of letters printed, or 0 (not successful)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int acc, rd, wrt;
	char *bff;

	if (filename == NULL)
		return (0);

	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
		return (0);

	acc = open(filename, O_RDONLY);
	rd = read(acc, bff, letters);
	wrt = write(STDOUT_FILENO, bff, rd);

	if (acc == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(bff);
		return (0);
	}

	free(bff);
	close(acc);

	return (wrt);
}

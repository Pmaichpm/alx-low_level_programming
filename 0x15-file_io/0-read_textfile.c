#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters
 * Return: actual number of letters printed, or 0 (not successful)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffr;

	if (filename == NULL)
		return (0);

	buffr = malloc(sizeof(char) * letters);
	if (buffr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffr, letters);
	wr = write(STDOUT_FILENO, buffr, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffr);
		return (0);
	}

	free(buffr);
	close(op);

	return (wr);
}

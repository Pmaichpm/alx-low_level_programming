#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *init_buffer(char *filename)
void clz_file(int filed)

/**
 * init_buffer - initiates a buffer
 * @filename: File name
 */

char *init_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * clz_file - close files
 * @filed: files closed
 */

void clz_file(int filed)
{
	int f;

	f = close(filed);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filed %d\n", filed);
		exit(100);
	}
}


/**
 * main - copies the content of a file to another file
 * @argc: total arguments passed
 * @argv: array of pointers
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int from, to, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = init_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(to, buff, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}

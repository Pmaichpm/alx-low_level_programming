#include "main.h"

/**
 * create_file -  creates a file
 * @filename: file name
 * @text_content: string
 *
 * Return: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int acc, wr, rd = 0;

	if (!filename)
		return (-1);

	acc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (acc < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[rd])
			rd++;
		wr = write(acc, text_content, rd);
		if (wr != rd)
			return (-1);
	}

	close(acc);

	return (1);
}

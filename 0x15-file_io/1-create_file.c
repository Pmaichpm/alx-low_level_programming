#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to write to the file
 *
 * Return: 1 Success, -1 Fail
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		{

		for (lng = 0; text_content[lng];)
			lng++;
		}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, lng);

		if (op == -1 || wrt == -1)

			return (-1);

	close(op);

	return (1);
}
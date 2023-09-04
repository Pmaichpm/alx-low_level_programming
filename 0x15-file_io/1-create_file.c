#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to write to the file
 *
 * Return: 1 Succes, -1 Fail
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, lng;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(o, text_content, lng);

	if (text_content != NULL)
		{
		lng = 0;
		while (*(text_content + lng) != '\0')
			lng++;

		else if (wrt == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(op);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file text is appended
 * @text_content: text to append
 *
 * Return: 1 Success, -1 Fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, lng);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}

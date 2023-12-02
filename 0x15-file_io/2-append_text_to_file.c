#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: file name
 * @text_content: string
 *
 * * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int acc, wr, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}

	acc = open(filename, O_WRONLY | O_APPEND);
	wr = write(acc, text_content, lng);

	if (acc == -1 || wr == -1)
		return (-1);

	close(acc);

	return (1);
}

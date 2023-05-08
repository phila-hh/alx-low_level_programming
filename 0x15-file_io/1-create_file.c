#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to be created
 * @text_content: a pointer to the string to be written to the file
 *
 * Return: 1, otherwise -1 if the function fails
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}

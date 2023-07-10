#include "main.h"

/**
 * append_text_to_file - Appends Text.
 * @filename: Pointer to file name.
 * @text_content: String added at end of file.
 *
 * Return: failed or NULL - -1, does not  -1, Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}

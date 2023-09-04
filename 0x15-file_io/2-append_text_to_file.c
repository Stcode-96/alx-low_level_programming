#include "main.h"

/**
 * append_text_to_file - changes text at the end of a file.
 * @filename: shows file name.
 * @text_content: string can be included at the end.
 *
 * Return: fail or success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (filename != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONGLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

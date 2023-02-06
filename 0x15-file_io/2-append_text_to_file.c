#include "main.h"

/**
 * append_text_to_file - appends the text at the end of the file
 * @filename: the name of the file
 * @text_content: the NULL trminated string to add at the end of the file
 *
 * Return: 1 if success, -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, text;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		text = write(file, text_content, len);

		if (text == -1)
			return (-1);
	}

	close(file);

	return (1);
}

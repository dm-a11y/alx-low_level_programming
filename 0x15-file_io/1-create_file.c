#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if success, -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len;
	ssize_t crd_file; /* where crd_file is created file */

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;

		while (*(text_content + len) != '\0')
			len++;

		crd_file = write(file, text_content, len);

		if (crd_file == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(file);
	return (1);
}

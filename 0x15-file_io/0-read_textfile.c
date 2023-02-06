#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letr, readValue;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY, 0700);

	if (file == -1)
			return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	readValue = read(file, buffer, letters);

	if (readValue == -1)
	{
		free(buffer);
		return (0);
	}

	letr = write(STDOUT_FILENO, buffer, readValue);

	if (letr == -1)
	{
		free(buffer);
		return (0);
	}

	close(file);
	return (letr);
}


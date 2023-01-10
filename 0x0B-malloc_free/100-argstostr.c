#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *concat_arg;
	int a, x, y, z;

	if (ac == 0)
		return (NULL);

	for (a = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);
		for (y = 0; av[x][y] != '\0'; y++)
			a++;
		a++;
	}

	concat_arg = malloc(sizeof(char) * (a + 1));

	if (concat_arg == NULL)
	{
		free(concat_arg);
		return (NULL);
	}

	for (x = y = z = 0; z < a; y++, z++)
	{
		if (av[x][y] == '\0')
		{
			concat_arg[z] = '\n';
			x++;
			z++;
			y = 0;
		}
		if (z < a - 1)
			concat_arg[z] = av[x][y];
	}
	concat_arg = '\0';

	return (concat_arg);
}

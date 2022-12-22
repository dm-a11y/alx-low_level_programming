#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @u: string to modify
 * Return: dest
 */
char *string_toupper(char *u)
{
	int x;

	for (x = 0; u[x] != '\0'; x++)
	{
		if (u[x] >= 97 && u[x] <= 122)
			u[x] -= 32;
	}

	return (u);
}

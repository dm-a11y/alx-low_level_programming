#include "main.h"

/**
 * leet - encodes a string
 * @e: a string to be encoded
 * Return: e
 */
char *leet(char *e)
{
	int x;
	int y;
	char *encode = "aAeEoOtTlL4433007711";

	for (x = 0; e[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (e[x] == encode[y])
				e[x] = encode[y + 10];
		}
	}
	return (e);
}

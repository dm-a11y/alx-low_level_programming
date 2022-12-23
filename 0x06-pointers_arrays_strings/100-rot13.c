#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @r: a string to be encoded
 *
 * Return: r
 */
char *rot13(char *r)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x;
	char *strencode = r;

	while (*r != '\0')
	{
		for (x = 0; x < 52; x++)
			if (*r == in[x])
			{
				*r = out[x];
				break;
			}
		r++;
	}
	return (strencode);
}

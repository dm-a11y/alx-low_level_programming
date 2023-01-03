#include "main.h"

/**
<<<<<<< HEAD
 * rot13 - encodes a string using rot13
=======
 * rot13 - encode a string using rot13
>>>>>>> 08153d3e8d1ddea15905d77d65a4c42b52883917
 *
 * @r: a string to be encoded
 *
 * Return: r
 */
char *rot13(char *r)
{

	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x;
	char *strencode = r;

	while (*r != '\0')
	{
		for (x = 0; x < 52; x++)

			if (*r == in[x])
			if (*r == alp[x])

			{
				*r = out[x];
				break;
			}
		r++;
	}
	return (strencode);
}



>>>>>>> 08153d3e8d1ddea15905d77d65a4c42b52883917

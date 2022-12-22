#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @c: a string to be capitalized
 * Return: c
 */
char *cap_string(char *c)
{
	int x = 0;
	int y;
	char separate[] = " \t\n,;.!?\"(){}";

	for (; *(c + x) != '\0'; x++)
	{
		if (*(c + x) >= 97 && *(c + x) <= 122)
		{
			if (x == 0)
				*(c) += (65 - 97);
			else
			{
				for (y = 0; y < 13; y++)
				{
					if (*(c + x - 1) == separate[y])
						*(c + x) += (65 - 97);
				}
			}
		}
	}
	return (c);
}

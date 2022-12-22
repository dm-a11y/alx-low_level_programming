#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to be modified
 * @src: string to be copied to the end.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	
	for (; *(dest + x) != '\0'; x++)
	{
		for (; *src != '\0'; src++)
		{
			*(dest + x) = *src;
			x++;
		}
	}
	*(dest + x) = *src;

	return (dest);
}

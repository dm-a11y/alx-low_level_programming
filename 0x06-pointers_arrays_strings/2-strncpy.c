#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: origin
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;
	for (x = 0; x < n && src[c] != '\0'; x++)
	{
		dest[c] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest); 
}

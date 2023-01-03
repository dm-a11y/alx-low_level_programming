#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substr * ing not is found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack + 1)
	{
		char *s = haystack;
		char *subS = needle;

		while (*s == *subS && *subS != '\0')
		{
			s++;
			subS++;
		}
		if (*subS == '\0')
			return (haystack);
	}
	return (0);
}


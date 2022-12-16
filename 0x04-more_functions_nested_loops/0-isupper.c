#include "main.h"

/**
 * isupper - prints whether the tha value passed to it is uppercase or not.
 * Return: return 1 if success otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

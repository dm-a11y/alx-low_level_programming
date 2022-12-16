#include "main.h"

/**
 * _isupper - checks whether the value passed to it is uppercase or not.
 * @c: Argument passed to the functio
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

#include "main.h"

/**
 * _isdigit - checks whether the value passed to it is a digit or not
 *
 * @c: anArgument passed to the function
 *
 * Return: return 1 if success otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

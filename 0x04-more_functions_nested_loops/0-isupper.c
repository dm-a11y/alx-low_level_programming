#include "main.h"


/* a function which tells us wheather the character passed to it is uppercase or not. */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

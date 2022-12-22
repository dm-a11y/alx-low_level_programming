#include "main.h"

/**
 * reverse_array - reverses the content of an array 
 * @a: pointer variable of an array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int rev;

	n--;

	while (x < n)
	{
		rev = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = rev;
		n--;
		x++;
	}
}

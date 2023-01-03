#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal of a square matrix integers.
 * @a: input pointer
 * @size: sieze of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x];
		sum2 += a[size - x - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}

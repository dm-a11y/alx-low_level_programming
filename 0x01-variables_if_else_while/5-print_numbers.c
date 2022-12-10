#include <stdio.h>

/**
 * main - function
 * main prints all single digit base ten numbers starting from zero followed by  * a new line.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	
	printf("\n");
	return (0);
}

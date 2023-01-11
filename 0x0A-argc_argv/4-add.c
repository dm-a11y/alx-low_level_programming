#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of numbers
 * @argc: count number of arguments
 * @argv: an array of pointers to the string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y, sum;

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

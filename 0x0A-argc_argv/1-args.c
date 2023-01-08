#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments
 * @argv: the array of pointers to the string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc = 0;

	printf("%d\n", argc);

	return (0);
}

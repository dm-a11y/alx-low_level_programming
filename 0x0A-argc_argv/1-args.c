#include <stdio.h>

/**
 * main - prints the nuumber of arguments
 * @argc: count number of arguments
 * @argv: an array of pointers to the string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

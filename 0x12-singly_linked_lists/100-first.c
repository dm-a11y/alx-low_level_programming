#include <stdio.h>

void print_str(void)__attribute__((constructor));

/**
 * print_str - function executed before main
 *
 * Return: Nothing.
 */
void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

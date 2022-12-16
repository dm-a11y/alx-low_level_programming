#include <stdio.h>

/**
<<<<<<< HEAD
  * main - causes an infinite loop
  * Return: 0
  */
=======
 * main - causes an infinite loop
 * Return: 0
 */
>>>>>>> fa3dbbb6785dededd71fe434c7d77eecec66d9f2

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
<<<<<<< HEAD

	while (1 < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\/o\n");
=======
	/**

	while (i < 10)
	{
		putchar(i);
	}
	*/
	

	printf("Infinite loop avoided! \\o/\n");
>>>>>>> fa3dbbb6785dededd71fe434c7d77eecec66d9f2

	return (0);
}

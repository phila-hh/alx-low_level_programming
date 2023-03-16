#include <stdio.h>

/**
 * main - Prints a message to the standard error using fprintf() function
 *
 * Return: 1
 */
int main(void)
{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, \
			2015-10-19\n");
	return (1);
}

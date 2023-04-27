#include <stdio.h>

void __attribute__((constructor)) print_string(void);

/**
 * print_string - prints a string before the main function is executed
 *
 * Return: void
 */

void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

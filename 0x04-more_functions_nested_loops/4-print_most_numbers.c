#include "main.h"

/**
 * print_most_numbers - prints the numbers form 0 to 9, without 4 and 2
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}

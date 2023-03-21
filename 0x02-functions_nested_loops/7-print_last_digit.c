#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number input
 *
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = (r % 10);
	if (r < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}

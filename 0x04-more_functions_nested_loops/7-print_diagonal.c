#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number input
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int temp;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			temp = x;
			while (temp > 0)
			{
				_putchar(' ');
				temp--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

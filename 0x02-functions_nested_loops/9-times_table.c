#include "main.h"

/**
 * times_table - a function that prints ths 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			p = (r * c);
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((p % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

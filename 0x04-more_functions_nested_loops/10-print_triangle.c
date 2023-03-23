#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: number input
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;
	int count;

	count = 1;
	if (size > 0)
	{
		while (size > 0)
		{
			for (a = 0; a < (size - 1); a++)
			{
				_putchar(' ');
			}
			for (b = 0; b < count; b++)
			{
				_putchar('#');
			}
			_putchar('\n');

			size--;
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

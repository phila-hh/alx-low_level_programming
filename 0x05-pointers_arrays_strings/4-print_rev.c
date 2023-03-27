#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: character pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		len++;
	}

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: character pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = len - ((len - 1) / 2);
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

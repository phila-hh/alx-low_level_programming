#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: character pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

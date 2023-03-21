#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *chr = "_putchar";

	while (*chr)
	{
		_putchar(*chr);
		chr++;
	}
	_putchar('\n');

	return (0);
}

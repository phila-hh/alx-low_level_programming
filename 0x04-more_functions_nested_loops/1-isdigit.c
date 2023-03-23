#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: number input
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

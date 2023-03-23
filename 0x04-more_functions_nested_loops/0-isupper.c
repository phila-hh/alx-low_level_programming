#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character input
 * Return: 1 if c is uppercase, else 0
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

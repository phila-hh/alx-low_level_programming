#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string with 0 and 1 chars
 *
 * Return: the converted number, or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, mul;

	if (!b)
	{
		return (0);
	}

	for (len = 0; b[len];)
	{
		len++;
	}

	num = 0;
	mul = 1;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (num);
}

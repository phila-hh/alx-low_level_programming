#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string input
 *
 * Return: the converted number, or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, mul;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	len--;
	num = 0;
	mul = 1;
	while (len >= 0)
	{
		num += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}

	return (num);
}

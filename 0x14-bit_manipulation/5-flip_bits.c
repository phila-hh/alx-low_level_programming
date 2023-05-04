#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number to be flipped
 * @m: number to be flipped to
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exor = n ^ m, bits = 0;

	for (; exor > 0; exor >>= 1)
	{
		bits += (exor & 1);
	}

	return (bits);
}

#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: number input
 *
 * Return: computed int output
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

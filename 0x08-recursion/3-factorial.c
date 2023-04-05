#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number input
 *
 * Return: -1 if n is lessthan 0, else the factorial of the
 * given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

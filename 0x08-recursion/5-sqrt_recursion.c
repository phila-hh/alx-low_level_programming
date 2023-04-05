#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number input
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - checks if a number has a natural square root
 * @n: number input
 * @x: factor of n
 *
 * Return: natural square root if it exists
 */

int sqrt_recursive(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (sqrt_recursive(n, x + 1));
	}
}

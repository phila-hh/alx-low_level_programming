#include "main.h"

/**
 * is_prime_number - checks whether or not a number is prime
 * @n: number input
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (isPrime(n, 2));
}

/**
 * isPrime - checks if a number is prime
 * @n: number input
 * @x: factor of n
 *
 * Return: 1 if n is prime else 0
 */

int isPrime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	else if (n % x == 0)
	{
		return (0);
	}
	else if (x * x > n)
	{
		return (1);
	}
	else
	{
		return (isPrime(n, x + 1));
	}
}

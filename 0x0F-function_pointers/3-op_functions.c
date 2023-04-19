#include "3-calc.h"

/**
 * op_sum - performs addition operation
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction operation
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication operation
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division operation
 * @a:first number
 * @b: second number
 *
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs modulo operation
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

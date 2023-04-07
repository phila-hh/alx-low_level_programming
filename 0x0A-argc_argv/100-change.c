#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error is encountered, else 0
 */

int main(int argc, char *argv[])
{
	int i, coins;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = 0;
	coins = 0;
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}
	else
	{
		if (amount >= 25)
		{
			coins += amount / 25;
			amount -= coins * 25;
		}
		if (amount >= 10)
		{
			coins += amount / 10;
			i = amount / 10;
			amount -= i * 10;
		}
		if (amount >= 5)
		{
			coins += amount / 5;
			i = amount / 5;
			amount -= i * 5;
		}
		if (amount >= 2)
		{
			coins += amount / 2;
			i = amount / 2;
			amount -= i * 2;
		}
		if (amount == 1)
		{
			coins += 1;
			amount -= 1;
		}

		printf("%d\n", coins);
	}

	return (0);
}

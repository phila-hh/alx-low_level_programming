#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error is encounterd, else 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int sum, i;

	sum = 0;
	i = 1;
	while (argv[i])
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

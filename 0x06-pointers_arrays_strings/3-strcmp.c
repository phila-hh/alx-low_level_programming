#include "main.h"

/**
 * _strcmp - comapares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int x, i;

	x = 0;
	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
	}

	return (x);
}

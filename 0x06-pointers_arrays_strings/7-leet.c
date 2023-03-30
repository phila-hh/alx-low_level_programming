#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char alpha[20] = "aAeEoOtTlL";
	char num[20] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j / 2];
			}
		}
	}

	return (s);
}

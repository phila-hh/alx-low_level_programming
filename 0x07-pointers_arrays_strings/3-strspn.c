#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, checker;

	for (i = 0; s[i]; i++)
	{
		checker = 0;
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				checker = 1;
				break;
			}
		}

		if (checker == 0)
		{
			break;
		}
	}

	return (i);
}

#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to search in
 * @accept: string to search for
 *
 * Return: pointer to the byte in s that matchs one of the bytes in accept,
 * or NULL if no such byte exists
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, found;
	char *str;

	found = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			break;
		}
	}

	if (found == 1)
	{
		str = &s[i];
		return (str);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: first occurence of the character c,
 * else NULL if c does not exist in the string
 */

char *_strchr(char *s, char c)
{
	int i;
	char *str;
	int found = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			found = 1;
			break;
		}
	}

	if (found == 1)
	{
		str = &s[i];
	}
	else
	{
		str = 0;
	}
	return (str);
}

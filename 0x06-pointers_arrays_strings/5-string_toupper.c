#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string input
 *
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int i, diff;

	i = 0;
	diff = 'a' - 'A';
	while (s[i])
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = s[i] - diff;
		}
		i++;
	}

	return (s);
}

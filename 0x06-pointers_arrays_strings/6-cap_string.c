#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j, diff;
	int chars[20] = {' ', '\n', '\t', ',', '.', '"', ';', '!', '?',
		'(', ')', '{', '}'}

	i = 0;
	diff = 'a' - 'A';
	while (s[i])
	{
		if (i == 0)
		{
			if ('a' <= s[i] && s[i] <= 'z')
			{
				s[i] = s[i] - diff;
			}
		}

		for (j = 0; chars[j]; j++)
		{
			if (s[i] == chars[j])
			{
				if ('a' <= s[i + 1] && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - diff;
				}
			}
		}
		i++;
	}

	return (s);
}

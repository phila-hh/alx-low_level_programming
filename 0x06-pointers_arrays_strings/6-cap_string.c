#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, diff;

	i = 0;
	diff = 'a' - 'A';
	while (s[i])
	{
		if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') || (s[i] == '.'))
		{
			if ('a' <= s[i + 1] && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - diff;
			}
		}
		i++;
	}

	return (s);
}

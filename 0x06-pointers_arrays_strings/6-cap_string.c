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
		if (i == 0)
		{
			if ('a' <= s[i] && s[i] <= 'z')
			{
				s[i] = s[i] - diff;
			}
		}
		if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') ||
				(s[i] == '.') || (s[i] == ',') || (s[i] == '?') ||
				(s[i] == ';') || (s[i] == '"') || (s[i] == '(') ||
				(s[i] == ')') || (s[i] == '{') || (s[i] == '}') ||
				(s[i] == '!'))
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

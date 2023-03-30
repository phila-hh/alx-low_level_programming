include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, x;
	int diff = 32;
	int sep[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - diff;
		}

		diff = 0;

		for (x = 0; x <= 12; x++)
		{
			if (s[i] == sep[x])
			{
				x = 12;
				diff = 32;
			}
		}
	}

	return (s);
}

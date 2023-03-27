#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, len2;
	char temp;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		len++;
	}

	len2 = len - 1;
	i = 0;
	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
		i++;
	}
}

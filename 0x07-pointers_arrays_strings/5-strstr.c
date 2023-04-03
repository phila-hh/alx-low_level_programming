#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search from
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, checkpoint, found;
	char *str;

	checkpoint = 0;
	found = 0;
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			checkpoint = i;
			for (j = 0; needle[j]; j++)
			{
				if (needle[j] != haystack[i])
				{
					i = checkpoint;
					break;
				}
				i++;
			}
			if (checkpoint != i)
			{
				found = 1;
				break;
			}
		}
	}

	if (found == 1)
	{
		str = &(haystack[checkpoint]);
		return (str);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

int isPalindrome(char *s, int len, int i);
int _strlen(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string input
 *
 * Return: 1 if s is a palindrome else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len == 0)
	{
		return (1);
	}
	return (isPalindrome(s, len - 1, 0));
}

/**
 * isPalindrome - checks if a string is palindrome recursively
 * @s: string input
 * @len: length of the string
 * @i: string index
 *
 * Return: if palindrome 1, else 0
 */

int isPalindrome(char *s, int len, int i)
{
	if ((len - i) < 0)
	{
		return (1);
	}
	else if (s[i] != s[len - i])
	{
		return (0);
	}
	else
	{
		return (isPalindrome(s, len, i++));
	}
}

/**
 * _strlen - counts the length of a string
 * @s: string input
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		len++;
	}

	return (len);
}

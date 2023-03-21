#include "main.h"

/**
 * _islower - a function that checks for a lowercase character
 * @c: character input
 *
 * Return: 1 if int c is lowercase, else 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

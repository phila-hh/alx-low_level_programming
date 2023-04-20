#include "variadic_functions.h"

/**
 * print_strings - prints strings passed to the function
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be passed to the function
 *
 * Description: if separator is NULL, it's not printed
 *if a string input is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}

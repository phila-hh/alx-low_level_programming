#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed to the function
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i, j;
	printer_t f[4] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	i = 0;
	separator = "";
	while (format[i])
	{
		j = 0;
		while (j < 4 && ((format[i]) != *(f[j].type)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			f[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}

/**
 * print_char - prints character
 * @arg: list of arguments
 *
 * Return: void
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @arg: list of arguments
 *
 * Return: void
 */

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - prints float
 * @arg: list of arguments
 *
 * Return: void
 */

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints string
 * @arg: list of arguments
 *
 * Return: void
 */

void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

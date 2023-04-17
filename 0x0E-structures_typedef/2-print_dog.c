#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog pointer
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *n, *o;

	if (!(d == NULL))
	{
		n = d->name;
		o = d->owner;
		if (d->name == NULL)
		{
			n = "(nil)";
		}
		printf("Name: %s\n", n);
		if (d->age == 0)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %.6f\n", d->age);
		}
		if (d->owner == NULL)
		{
			o = "(nil)";
		}
		printf("Owner: %s\n", o);
	}
}

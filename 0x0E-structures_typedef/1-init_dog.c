#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: struct dog pointer
 * @name: string input
 * @age: number input
 * @owner: string input
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

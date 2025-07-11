#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialise a variable of type
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}

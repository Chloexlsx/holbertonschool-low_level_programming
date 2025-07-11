#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int i;
	unsigned int len;

	/*if the inputs are NULL*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocate memoty for dog*/
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/*store a copy of name*/
	/*cnt len -> malloc -> copy from input*/
	for (len = 0; name[len] != '\0'; len++)
		;
	d->name = malloc(len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		d->name[i] = name[i];

	/*store a copy of owner, steps are same as above*/
	for (len = 0; owner[len]; len++)
		;
	d->owner = malloc(len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		d->owner[i] = owner[i];
	d->age = age;
	return (d);
}

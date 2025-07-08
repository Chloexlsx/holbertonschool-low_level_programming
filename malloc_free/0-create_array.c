#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *		and initialises it with a specific char
 * @size: the size of the array
 * @c: the cahr to initialise with
 *
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	/*create a pointer to array*/
	char *a;
	unsigned int i = 0;

	/*exclude the situation when user pass 0 for size*/
	if (size == 0)
		return (NULL);

	/*allocate memory space to the array*/
	a = malloc(size * sizeof(char));

	/*check if the system allocate spaces as request*/
	if (a == NULL)
		return (NULL);

	/*initialise the array*/
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

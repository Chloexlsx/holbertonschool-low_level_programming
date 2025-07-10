#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: the memory to allocate
 *
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/*allocates memory using malloc*/
	ptr = malloc(b);
	/*if malloc fails, terminate with 98*/
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

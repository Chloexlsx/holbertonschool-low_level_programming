#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: the number of elements of the array
 *@size: the bytes to allocate
 *
 *
 *Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_str;
	unsigned int i;
	unsigned int *p;

	/*if input is 0, return NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*allocate memeory*/
	new_str = malloc(nmemb * size);
	if (new_str == NULL)
		return (NULL);
	/*initialise each item to 0*/
	/* in C you cannot do pointer arithmetic or indexing on a void* */
	/*, so we need int *p*/
	p = new_str;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (new_str);
}

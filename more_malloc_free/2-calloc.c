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
	size_t i;
	unsigned char *p;
	size_t total;

	/*if input is 0, return NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*detect overflow: if total/size != nmemb, it wrapped around*/
	total = (size_t)nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	/*safe to allocate*/
	new_str = malloc(total);
	if (new_str == NULL)
		return (NULL);
	/*initialise each item to 0*/
	/* in C you cannot do pointer arithmetic or indexing on a void* */
	/*, so we need int *p*/
	p = (unsigned char)new_str;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (new_str);
}

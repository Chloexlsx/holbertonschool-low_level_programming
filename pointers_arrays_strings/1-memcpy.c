#include "main.h"

/**
 * *_memcpy -  copies memory area to another memory area
 * @dest: the pointer to the destination area
 * @src: the pointer to the src of the memory area
 * @n: the number of bytes to copy
 *
 * Return: a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
return (dest);
}

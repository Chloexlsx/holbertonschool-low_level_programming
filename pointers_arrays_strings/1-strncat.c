#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings with n bytes
 * @dest: the formal parameter to be linked
 * @src: the array to linked
 * @n: the number of space to allocate
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}

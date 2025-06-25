#include "main.h"

/**
 * *_strncpy - copy one string
 * @dest: the formal parameter to be linked
 * @src: the array to link
 * @n: the number of space to copy
 *
 * Return: dest array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}

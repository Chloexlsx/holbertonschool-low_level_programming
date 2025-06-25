#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: the formal parameter to be linked
 * @src: the number of element to linked
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}

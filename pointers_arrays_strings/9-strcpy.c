#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src, including (\0) ,to by dest.
 *		,followed by a new line
 * @dest: the formal parameter to be printed
 * @src: the string pointed to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

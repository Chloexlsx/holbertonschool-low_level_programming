#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the formal parameter to be measured
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

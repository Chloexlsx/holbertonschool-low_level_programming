#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the formal parameter to be measured
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != 0)
	{
		len++;
	}
	return (len);
}

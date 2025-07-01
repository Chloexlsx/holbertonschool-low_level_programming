#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the initial segment
 * @accept: a string
 *
 * Return: an unsigned integer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j = j + 1;
		}
		i = i + 1;
	}
return (NULL);
}

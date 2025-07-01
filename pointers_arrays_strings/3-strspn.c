#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the initial segment
 * @accept: a string
 *
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	unsigned int c = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				k = 1;
				break;
			}
			j = j + 1;
		}
		if (k == 0)
			break;
		i = i + 1;
		c = c + 1;
	}
return (c);
}

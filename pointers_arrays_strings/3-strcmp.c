#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the formal parameter to be compared
 * @s2: the array to compare
 *
 *
 * Return: first mismatch
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

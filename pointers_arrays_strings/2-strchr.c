#include "main.h"
#include <stddef.h>

/**
 * *_strchr -  locates a character in a string
 * @s: a string
 * @c: the character c
 *
 * Return: a char pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (&s[i]);
		i = i + 1;
	}
	if (c == '\0')
		return (&s[i]);
return (NULL);
}

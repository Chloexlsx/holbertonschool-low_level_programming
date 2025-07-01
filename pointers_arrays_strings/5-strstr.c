#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring.
 * @haystack: the string
 * @needle: the substring to match
 * str_in_str - this is a function comparing two strings
 * @s: first string
 * @f: second string
 * Return: an char pointer
 */

static int str_in_str(char *s, char *f)
{
	int i;
	int j;

	while (f[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
		if (f[j] != s[j])
			return (0);
	return (1);
}

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int match = str_in_str(haystack + i, needle);

		if (match)
			return (haystack + i);
	}
return (NULL);
}

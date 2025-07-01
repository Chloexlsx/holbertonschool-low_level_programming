#include "main.h"
#include <stddef.h>


/**
 * str_in_str - helper to check if string f matches the start of s
 * @s: the string in which to look
 * @f: the substring to compare
 *
 * Return: 1 if the first strlen(f) bytes of s equal f, 0 otherwise
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


/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the substring to match
 *
 * Return: an char pointer
 */
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

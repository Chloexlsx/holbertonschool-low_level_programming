#include "main.h"

/**
 * *string_toupper - change all lowercase letters in an array into uppercase
 * @s: the char string to convert
 *
 * Return: a pointer to a char sting
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}

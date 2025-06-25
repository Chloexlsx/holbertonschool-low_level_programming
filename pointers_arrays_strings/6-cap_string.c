#include "main.h"

/**
 * *cap_string - capitalise all words in an array
 * @s: the char string to convert
 *
 * Return: a pointer to a char string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' ||
			s[i] == '?' || s[i] == '"' || s[i] == ')' ||
			s[i] == '(' || s[i] == '{' || s[i] == '}' ||
			s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}

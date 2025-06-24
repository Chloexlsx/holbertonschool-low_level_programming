#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the formal parameter to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (j = 0; j < i; j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;

	}
}

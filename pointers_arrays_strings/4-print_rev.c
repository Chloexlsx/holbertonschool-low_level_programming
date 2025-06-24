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
	int len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (len = i - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

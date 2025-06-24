#include "main.h"

/**
 * puts_half - prints the other half of a string
 *		,followed by a new line
 * @str: the formal parameter to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int l;
	int start;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
		start = i / 2;
	else
		start = (i + 1) / 2;

	for (l = start; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}

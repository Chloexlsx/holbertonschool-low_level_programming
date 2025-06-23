#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 but 2 and 4,
 *			 follow by a newline
 *
 * Return: numbers 0 to 9 but 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
	}
	_putchar('\n');
}

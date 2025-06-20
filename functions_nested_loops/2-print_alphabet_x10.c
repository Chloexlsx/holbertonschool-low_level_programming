#include "main.h"

/**
 * print_alphabet_x10 - print 10 times
 *
 *
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

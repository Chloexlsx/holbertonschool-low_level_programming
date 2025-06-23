#include "main.h"

/**
 * more_numbers - prints numbers 0 to 9 ten times,
 *			 follow by a newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

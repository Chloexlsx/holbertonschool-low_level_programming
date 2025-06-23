#include "main.h"

/**
 * print_square - prints square with # as large as the args,
 *			 follow by a newline
 * @size: the formal parameter passed to print #
 *
 * Return: void
 */
void print_square(int size)
{
	int h;
	int w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

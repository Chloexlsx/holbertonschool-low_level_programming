#include "main.h"

/**
 * print_line - prints _ as many time as the args,
 *			 follow by a newline
 * @n: the formal parameter passed to print _
 *
 * Return: void
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

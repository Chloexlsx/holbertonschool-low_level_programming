#include "main.h"

/**
 * print_diagonal - prints ' '\ as many time as the args,
 *			 follow by a newline
 * @n: the formal parameter passed to print ' '\
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int r;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < n; r++)
		{
			for (i = 0; i < r; i++)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

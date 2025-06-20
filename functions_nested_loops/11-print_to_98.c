#include "main.h"
/**
 * print_to_98 - prints the number from arg to 98;
 * @n: the formal parameter to pass
 *
 * Return: numbers from arg passed to 98
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else if (i == 10)
		{
			_putchar(10 + '0');
		}
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		if (i == 98)
			_putchar('\n');
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

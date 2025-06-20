#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the formal parameter to pass
 *
 * Return: always 0 (success)
 *
 */

int print_last_digit(int n)
{
	int e;

	e = (n % 10);
	if (e < 0)
		e = -e;
	_putchar(e + '0');
	return (e);
}

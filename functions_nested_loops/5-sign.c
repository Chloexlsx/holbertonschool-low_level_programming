#include "main.h"
/**
 * print_sign - checks if the arg is greater than 0 or less;
 * @n: the formal parameter to check
 *
 * Return: + if yes, otherwise -1 will be returned,
 * or 0 if equal
 *
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}

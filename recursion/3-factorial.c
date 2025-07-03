#include "main.h"

/**
 * factorial - returns the fractorial of a given number
 * @n: the given number
 *
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

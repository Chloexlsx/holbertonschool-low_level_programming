#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the first paramteter
 *
 *
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	/*declare agruments list*/
	va_list args;

	/*handle n = 0*/
	if (n == 0)
		return (0);
	/*initialise the list, count is the last arg*/
	va_start(args, n);

	/*get next arg in a for loop and add them up*/
	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	/*clean up args*/
	va_end(args);
	return (total);
}

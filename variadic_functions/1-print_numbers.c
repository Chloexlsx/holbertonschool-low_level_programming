#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*declare agruments list*/
	va_list args;

	/*initialise the list, n is the last arg*/
	va_start(args, n);

	/*get next arg in a for loop and add them up*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	/*handle when input for separator = NULL and not the last number*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	/*clean up args*/
	va_end(args);
}

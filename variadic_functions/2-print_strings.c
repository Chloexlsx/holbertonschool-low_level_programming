#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*declare agruments list*/
	va_list args;
	/*declare a char pointer to a string to store va_arg called*/
	char *current_str;

	/*initialise the list, n is the last arg*/
	va_start(args, n);

	/*get next arg in a for loop and add them up*/
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, char*);
		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");
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

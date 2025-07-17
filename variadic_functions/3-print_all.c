#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything followed by a new line
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j;
	va_list args;
	char *valid_formats = "cifs";
	char *current_str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (valid_formats[j])
		{
			if (format[i] == valid_formats[j])
			{
				printf("%s", separator);
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						current_str = va_arg(args, char*);
						if (current_str)
							printf("%s", current_str);
						if (!current_str)
							printf("(nil)");
						break;
				}
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	/*clean up args*/
	va_end(args);
}

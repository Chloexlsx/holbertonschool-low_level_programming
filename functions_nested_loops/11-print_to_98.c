#include <stdio.h>
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

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	printf("%d\n", 98);
}

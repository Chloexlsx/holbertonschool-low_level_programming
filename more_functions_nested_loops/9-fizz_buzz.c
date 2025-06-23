#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 0-100, but the *3 prints fixx and *5 buzz,
 *			 follow by a newline
 *
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
}

#include <stdio.h>

/**
 * main - prints a-z one by one in for loop starts from a to z.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

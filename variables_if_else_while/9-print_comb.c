#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

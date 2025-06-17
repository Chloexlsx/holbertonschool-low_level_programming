#include <stdio.h>
/**
 * main - loop thru thr range, print 0 to 9
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

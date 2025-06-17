#include <stdio.h>
/**
 * main - loop thru thr range, prints char a if a is not e and q
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		putchar(a);
	}
	putchar('\n');
	return (0);
}

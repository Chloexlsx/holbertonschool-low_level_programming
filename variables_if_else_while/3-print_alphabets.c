#include <stdio.h>
/**
 * main - prints lowercase and then uppercase a-z
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

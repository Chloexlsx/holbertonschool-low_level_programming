#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * declare an int variable n
 * Print out the string Last digit of
 * if the number is greater than 5
 * if the number is 0
 * if the number is less than 6 and not 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = (n % 10);
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * declare an int variable n
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("The number %d is positive.\n", n);
	}

	if (n == 0)
	{
		printf("The number %d is zero.\n", n);
	}

	if (n < 0)
	{
		printf("The number %d is negative.\n", n);
	}

	return (0);
}

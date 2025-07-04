#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of itself
 * @argc: the number of arguments
 * @argv: the array for the arguments
 *
 * Return: 0 if sucess.
 */
int main(int argc, char *argv[])
{
	int i, j, a, r = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		r += a;
	}
	printf("%d\n", r);

	return (0);
}
